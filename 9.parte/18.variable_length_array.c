#include <stdio.h>
#include <stdlib.h>
#include <alloca.h>

#define LENGTH 123

int *foo(int length)
{
    return alloca(length * sizeof(int));
}

int main(void)
{
    int length = 12;
    //int xs[length];
    //int *xs = malloc(length * sizeof(int));
    //int *xs = alloca(length * sizeof(int));
    int *xs = foo(length);

    for(int i = 0; i < length; i++)
        xs[i] = i * i;

    for(int i = 0; i < length; i++)
        printf("%d\n", xs[i]);

    //free(xs);

    return 0;
}