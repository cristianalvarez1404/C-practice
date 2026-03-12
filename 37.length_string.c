#include <stdio.h>

int str_length(char *s)
{
  int len = 0;
  while(s[len] != '\0') len++;

  return len;
}

int main(void)
{
  char a[] = "hola";

  printf("Length: %d\n", str_length(a));
  return 0;
}