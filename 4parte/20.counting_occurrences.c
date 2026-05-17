#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int word_count(char *string, char *word);

int main(void)
{ 
  char s[] = "It is in this string once.";
  char w[] = "It";
  int result = word_count(s, w);
  printf("Result: %d\n", result);
  
  char s2[] = "This is in in in the word.";
  char w2[] = "in";
  int result2 = word_count(s2, w2);
  printf("Result: %d\n", result2);

  return 0;
}

int word_count(char *string, char *word)
{
  int slen = strlen(string);
  int wlen = strlen(word);
  int end = slen - wlen + 1;
  int count = 0;

  for(int i = 0; i < end; i++)
  { 
    bool word_found = true;
    int j = 0;
    for(j; j < wlen; j++)
    {
      if(word[j] != string[i + j])
      {
        word_found = false;
        break;  
      }
    }
    if(word_found) count++;
  }

  return count;
}