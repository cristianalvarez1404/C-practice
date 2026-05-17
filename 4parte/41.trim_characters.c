#include <stdio.h>

void trim(char *s);

int main()
{
  char s[] = " \n\n\t This is the way.";
  
  printf("before: \n%s\n", s);
  trim(s);
  printf("after: \n%s\n", s);

  return 0;
}

void trim(char *s)
{
  int count = 0;
  while(s[count] == ' ' || s[count] == '\n' || s[count] == '\t')
    count++;
  
  if(count != 0)
  {
    int i = 0;
    while(s[i + count] != '\0')
    {
      s[i] = s[i + count];
      i++;
    }
    s[i] = '\0';
  }
}