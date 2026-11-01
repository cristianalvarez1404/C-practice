#include <stdio.h>
#include <stdarg.h>

int sum_all(int count, ...)
{  
    va_list ap;
    va_start(ap, count);
    int sum = 0;

    for(int i = 0; i < count; i++){
        int x = va_arg(ap, int);
        sum += x;
    }
    va_end(ap);
    return sum;
}

int main(void)
{   
    printf("%d, %d\n", 1, 2);
    //execl("/usr/bin/cat", "some_file", "file2", NULL);
    printf("%d\n", sum_all(3, 5, 6, 7));

    return 0;
}