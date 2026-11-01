#include <stdio.h>

int main(void)
{
    int a = 1;

    printf("%+05d\n", 322);
    printf("%u\n", 32);
    printf("%f\n", 42.42);
    printf("%p\n", &a);
    printf("%c\n", 'a');
    printf("%s\n", "hello");
    printf("%%\n");
    
    return 0;
}