#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool remove_char(char *s, int pos);

int main()
{
  char s[] = "12345-12345";
  bool result1 = remove_char(s, 5);

  if(result1) 
    printf("Char removed from string!\n");
  else 
    printf("Char not removed from string.!\n");

  printf("%s\n",s);
  return 0;
}

bool remove_char(char *s, int pos)
{
  int length = strlen(s);

  if(pos >= length) return false;

  for(int i = pos; i < length; i++)
    s[i] = s[i + 1];

  return true;
}