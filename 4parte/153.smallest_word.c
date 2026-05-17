#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *smallest_word(char *s);

int main()
{
  char s[] = "A sentence with several words.";
  char *word = smallest_word(s);

  printf("%s\n", word);

  free(word);

  return 0;
}

char *smallest_word(char *s)
{
  int len = strlen(s);

  if(len == 0) return NULL;

  int count = 0;
  int min = -1;
  char temp_buffer[256];
  char min_word[256];
  
  char nonwords[] = " .,;\n\t";

  int i = 0;

  while(i < len)
  {
    count = 0;
    while(i < len)
    {
      if(strchr(nonwords, s[i]) != NULL) break;
      temp_buffer[count] = s[i];
      i++;
      count++;
    }
    temp_buffer[count] = '\0';
    
    if(count < min || min == -1)
    {
      min = count;
      strcpy(min_word, temp_buffer);
    }

    while(i < len)
    {
      if(strchr(nonwords, s[i]) == NULL) break;
      i++;      
    }
  }

  char *word = malloc(sizeof(char) * (min + 1));
  strcpy(word, min_word);

  return word;
}