#include <stdio.h>
#include <string.h>
#include <ctype.h>

void make_lower(char *s);

int main()
{
  char s[] = "Some String With LOTS OF Capital";
  make_lower(s);
  printf("%s\n",s);

  return 0;
}

void make_lower(char *s)
{
  int length = strlen(s);

  for(int i = 0; i < length; i++)
    s[i] = tolower(s[i]);

}