#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *literal = "I am a string literal.";
    char array[] = "I am a string array";
    char *s = strdup(literal);

    array[0] = '#';
    literal[0] = '#';  

    printf("%s\n", literal);
    printf("%s\n", array);

    printf("%ld\n", sizeof(literal));
    printf("%ld\n", sizeof(array));
}