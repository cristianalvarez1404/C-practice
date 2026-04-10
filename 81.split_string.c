#include <stdio.h>
#include <string.h>

void string_split(char *s, int index, char *first, char *second);

int main()
{
  char str[] = "I've got one hand in my pocket";
  char first[100], second[100];

  string_split(str, 13, first, second);

  printf("%s\n", first);
  printf("%s\n", second);
  return 0;
}

void string_split(char *s, int index, char *first, char *second)
{
  int length = strlen(s);

  if(index < length)
  {
    for(int i = 0; i < index; i++)
      first[i] = s[i];
    first[index] = '\0';  
    
    for(int i = index; i <= length; i++)
      second[i - index] = s[i];
  }

}