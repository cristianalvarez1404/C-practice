#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "hola";
    int len = strlen(str);
    char new_str[len + 1]; 
    printf("Length => %d\n",len);

    for(int i = 0; i < len; i++)
    {
        new_str[i] = str[len - 1 - i]; 
    }
    new_str[len] = '\0';

    printf("%s\n", new_str);

    return 0;
}