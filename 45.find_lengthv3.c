#include <stdio.h>
#include <string.h>

int smallest_word(char *s);

int main()
{
  char s[] = "This a is the way.";
  int min_word = smallest_word(s);

  printf("%d",min_word);

  return 0; 
}

int smallest_word(char *s)
{
  int len = strlen(s);
  int min = strlen(s);
  int count = 0;
  char* char_list = " .;,\n\t";
  int i = 0;

  while(i < len)
  {
    count = 0;
    while(i < len)
    {
      if(strchr(char_list,s[i]) != NULL)
        break;
      i++;
      count++;
    }

    if(count < min) min = count;

    while(i < len)
    {
      if(strchr(char_list,s[i]) == NULL)
        break;
      i++;
    }
  }

  return min;
}