#include <stdio.h>

//macros
#define FOO 2
#define ADD(x, y) (x + y)

#define SUM_RANGE(start, end) do {   \
    int sum = 0;                     \
    for(int x = start; x < end; x++) \
        sum += x;                    \
    printf("sum: %d\n", sum);        \
} while (0)   

int main(void)
{
    //int x = 5 * ADD(2, 3);
    //printf("%d\n", x);
    int sum = 20;
    {
        SUM_RANGE(2, 10);
    }

    return 0;
}