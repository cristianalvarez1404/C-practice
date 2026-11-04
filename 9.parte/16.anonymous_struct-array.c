#include <stdio.h>

struct Vec2
{
    int x;
    int y;
};

int scale_sum(int scalar, struct Vec2 v)
{
    return scalar * v.x + scalar * v.y;
}

int sum(int xs[], int len)
{
    int s = 0;
    for(int i = 0; i < len; i++)
        s += xs[i];
    return s;
}

int main(void)
{
    struct Vec2 v;
    v.x = 2;
    v.y = 3;
    int result = scale_sum(4, v);
    int result2 = scale_sum(5, (struct Vec2){2, 3});
    printf("%d\n", result);
    printf("%d\n", result2);

    int s = sum((int[]){1,2,3,4,5,6,7}, 7);
    printf("%d\n", s);

    return 0;
}

