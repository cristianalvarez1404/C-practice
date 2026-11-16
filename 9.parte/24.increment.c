#include <stdio.h>

int main(void)
{
    for(int i = 0; i < 10; i++)
        printf("%d\n", i);

    int xs[] = {1, 2, 3, 4, 5, -1};
    int i = 0;

    while(xs[i] != -1)
    {
        int x = xs[i++];
        printf("%d\n", x);
        //i++;
    }

    return 0;
}