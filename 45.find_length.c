#include <stdio.h>
#include <string.h>

void largest_word(char *s, int *start, int *length);

int main()
{
    char s[] = "This is the way.";
    int start, length;

    largest_word(s, &start, &length);

    char new[length + 1]; // +1 para '\0'

    for(int i = 0; i < length; i++)
    {
        new[i] = s[start + i];
    }

    new[length] = '\0';

    printf("%s\n", new);

    return 0;
}

void largest_word(char *s, int *start, int *length)
{
    int len = strlen(s);
    int max_len = 0;
    int max_start = 0;

    int i = 0;

    while(i < len)
    {
        while(i < len && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
            i++;

        int current_start = i;
        int current_len = 0;

        while(i < len && s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
        {
            current_len++;
            i++;
        }

        if(current_len > max_len)
        {
            max_len = current_len;
            max_start = current_start;
        }
    }

    *start = max_start;
    *length = max_len;
}