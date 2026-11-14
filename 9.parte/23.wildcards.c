#include <stdio.h>
#include <string.h>
#include <fnmatch.h>
#include <glob.h>

int main(void)
{
    char *s = "hello, world!";
    int result = fnmatch("he*wo*", s, 0);
    int result1 = fnmatch("he???", s, 0);
    int result2 = fnmatch("he[abcl]lo", s, 0);
    int result3 = fnmatch("he[a-z]lo", s, 0);
    int result4 = fnmatch("he[:alpha:]lo", s, 0);

    if(result == 0)
        printf("match\n");
    else if (result == FNM_NOMATCH)
        printf("no match\n");
    
    return 0;
}