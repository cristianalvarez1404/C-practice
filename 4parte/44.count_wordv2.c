#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[] = "hola que tal hola";
    int len = strlen(s);
    int words = 0;
    int in_word = 0; 

    for(int i = 0; i < len; i++)
    {
        if(s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        {
            if(!in_word)
            {
                words++;   
                in_word = 1; 
            }
        }
        else
        {
            in_word = 0; 
        }
    }

    printf("words: %d\n", words);

    return 0;
}