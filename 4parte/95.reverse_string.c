#include <stdio.h>
#include <string.h>

int main()
{
  char test[] = "One small step for (a) man.";
  int len = strlen(test);
  char reverse[len + 1];
  
  int i = 0;
  while(i < len)
  {
    reverse[i] = test[len - 1 - i];
    i++;
  }

  reverse[len] = '\0';

  printf("Original string: %s\n",test);
  printf("Reversed string: %s\n", reverse);

  return 0;
}