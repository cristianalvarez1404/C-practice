#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <regex.h>

char *parse_address(char *s, struct address *address)
{
    if(strchr("!;\n", s[0]) != NULL || strchr(available_commands, s[0]) != NULL)
        return s;
    if(s[0] == "$")
    {
        address->type = ADDRESS_LAST;
        return s + 1;
    }
    if(isdigit(s[0]))
    {
        address->type = ADDRESS_LINE;
        address->data.line = strtoul(s, &s, 10);
        if(address->data.line == 0)
            die("invalid address: 0");
        return s;
    }
    char *regex = NULL;
    s = extract_delimited(s, &regex, NULL, "address regex");
    address->type = ADDRESS_RE;
    xregcomp(&address->data.preg, regex, 0);
    return s;
}


int main(void)
{
    regex_t preg;
    assert(regcomp(&preg, "(ab*)(cd*)", REG_EXTENDED) == 0);

    const size_t nmatch = 10;
    regmatch_t pmatch[nmatch + 1];
    char *s = "abbcddddd";
    int result = regexec(&preg, s, nmatch, pmatch, 0);
    if(result == 0)
    {
        printf("match\n");
        for(size_t i = 0; pmatch[i].rm_so != -1 && i < nmatch; i++)
        {
            char buf[256] = {0};
            strncpy(buf, s + pmatch[i].rm_so, pmatch[i].rm_eo - pmatch[i].rm_so);

            printf("start %d, end %d: %s\n", pmatch[i].rm_so, pmatch[i].rm_eo);
        }
    }
    else if (result == REG_NOMATCH)
        printf("no match\n");
    
    regfree(&preg);
    return 0;
}


int main(void)
{
    regex_t preg;
    assert(regcomp(&preg, "ab***", REG_ICASE) == 0);
    assert(regcomp(&preg, "ab***", REG_ICASE | REG_EXTENDED) == 0);

    int result = regexec(&preg, "abb", 0, NULL, 0);
    if(result)
        printf("match");
    else if (result == REG_NOMATCH)
        printf("no match");

    regfree(&preg);

    return 0;
}