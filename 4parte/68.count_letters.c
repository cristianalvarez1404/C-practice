#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letters(char *s);

int main()
{
  char s[] = "A string with some letters 123456789 !@#%&*()";
  int result = count_letters(s);

  printf("Letter count: %d\n",result);

  return 0;
}

int count_letters(char *s)
{
  int length = strlen(s);
  int count = 0;

  for(int i = 0; i < length; i++)
    if(isalpha(s[i])) count++;

  return count;
}