#include <stdio.h>
#include <string.h>
#include <fnmatch.h>
#include <glob.h>

int errfunc(const char *epath, int errno)
{
    printf("Error for: %s: %s", epath, strerror(errno));
    return 0;
}

int main(void)
{
    glob_t pglob;
    int result = glob("*.c", 0, errfunc, &pglob);
    glob("some_dir/*.c", GLOB_APPEND, NULL, &pglob);
    for(size_t i = 0; i < pglob.gl_pathc; i++)
        printf("%zu: %s\n", i, pglob.gl_pathv[i]);
    globfree(&pglob);

    return 0;
}

int main1(void)
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

    char *s2 = "path/to/.file";
    int result5 = fnmatch("path/*/?file", s2, FNM_PATHNAME | FNM_PERIOD);

   return 0;
}
