#include <stdio.h>
#include <string.h>

int largest_word(char *s);

int main(void)
{
  char s[] = "This is the way.";
  int largest_length = largest_word(s);
  printf("%d\n", largest_length);
  
  return 0;
}

int largest_word(char *s)
{
  int len = strlen(s);
  int count = 0;
  int max = -1;
  char nonwords[] = " .,;\n\t";

  int i = 0;
  while(i < len)
  {
    count = 0;
    while(i < len)
    {
      if(strchr(nonwords, s[i]) != NULL)
        break;
      i++;
      count++;
    }

    if(count > max) max = count;
  
    while(i < len)
    {
      if(strchr(nonwords, s[i]) == NULL)
        break;
      i++;
    }
  }

  return max;
}