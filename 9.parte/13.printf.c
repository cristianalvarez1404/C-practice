#include <stdio.h>
#include <stddef.h>

int main(void)
{
    int a = 1;
    long int l = 123465786454;
    short s = 123;
    char c = 12;

    size_t size = 123;
    printf("%zu\n", size);

    printf("%+05d\n", 322);
    printf("%u\n", 32);
    printf("%f\n", 42.42);
    printf("%p\n", &a);
    printf("%c\n", 'a');
    printf("%s\n", "hello");
    printf("%%\n");
    
    printf("%.3f\n", 42.4212341234);
    printf("%s\n", s);
    printf("%c\n", c);

    FILE *f = fopen("foo", "rw");
    fprintf(f, "%d, %d\n", 3, 2);
    fclose(f);

    char buf[256] = {0};
    sprintf(buf, "%d, %d", 3, 2);

    printf("#%s#\n", buf);

    return 0;
}