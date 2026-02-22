#include <stdio.h>
#include "add.c"

//extern int count;

int main() {
    int value;
    value = increment();
    value = increment();
    value = increment();
    value = increment();
    value = increment();
    //count = count + 3;
    //value = count;

    printf("%d", value);
    return 0;
}
