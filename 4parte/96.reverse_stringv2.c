#include <stdio.h>
#include <string.h>

void reverse(char *string);

int main(void)
{
  char test[] = "One small step for (a) man.";
  reverse(test);
  printf("%s\n",test);

  return 0;
}

void reverse(char *string)
{
  int len = strlen(string);

  int i = 0;
  char temp;
  while(i < (len / 2))
  {
    temp = string[i];
    string[i] = string[len - i - 1]; 
    string[len - i - 1] = temp;
    i++;
  }
}