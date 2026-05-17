#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *replace(char *before, char *oldsub, char *newsub);

int main()
{


  return 0;
}

char *replace(char *before, char *oldsub, char *newsub)
{
  int old_length = strlen(oldsub);
  int new_length = strlen(newsub);
  int before_length = strlen(before);

  char *after;

  if(old_length == new_length)
  {
    after = malloc((before_length + 1) * sizeof(char));
  }
  else
  {
    int occurrences = 0;
    
    int i = 0;
    while(i < before_length)
    {
      if(strstr(&before[i], oldsub) == &before[i])
      {
        occurrences++;
        i += old_length;
      }
      else i++;
    }

    int sub_diff = new_length - old_length;
    int after_length = before_length;
    after_length += occurrences * sub_diff;

    after = malloc((after_length + 1) * sizeof(char));
  }
}