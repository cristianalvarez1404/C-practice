#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static size_t count_segment(char const *s, char c)
{
    size_t counter = 0;
    int i = 0;
    while (s[i])
    {
        if(s[i] == c)
        {
            i++;
            continue;
        }
        counter++;
        while(s[i] && s[i] != c)
            i++;
    }
    return counter;
}

char **split(char const *s, char c)
{
    char **strs;
    size_t tab_counter;
    size_t i;
    size_t j;

    if(s == NULL)
        return (NULL);

    tab_counter = count_segment(s, c);
    if ((strs = (char**) malloc(sizeof(char*) * (tab_counter + 1))) == NULL)
        return (NULL);
    tab_counter = 0;
    j = -1;

    while(s[++j])
    {
        if(s[j] == c)
            continue;
        i = 0;
        while(s[j + 1] && s[j + i] != c)
            i++;
        if((strs[tab_counter++] = strndup(&s[j], i)) == NULL)
            return NULL;
        j += i - 1;
    }
    strs[tab_counter] = NULL;
    return strs;
}

int main(void)
{
    char **parts = split("2,2,3,4,5", ",");
    for(int i = 0; parts[i] != NULL; i++)
        printf("%s\n", parts[i]);

    return 0;
}


int main(void)
{
    char s[] = "1,,,2,3,4,5";
    char *token = strtok(s, ",");
    while(token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}

int main(void)
{
    char s[] = "1,2,3,4,5";
    char *s_ptr = s;
    char *token;
    while((token = strsep(&s_ptr, ",")) != NULL)
        printf("%s\n", token);

    return 0;
}

