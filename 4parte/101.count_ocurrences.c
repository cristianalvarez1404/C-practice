#include <stdio.h>
#include <string.h>

int count_char(char *s, char c);

int main()
{
  char test[] = "This is my test string.";

  int count_s = count_char(test, 's');

  printf("count s: %d\n",count_s);

  return 0;
}

int count_char(char *s, char c)
{
  int length = strlen(s);
  int count = 0;

  for(int i = 0; i < length; i++)
    if(s[i] == c) count++;

  return count;
}