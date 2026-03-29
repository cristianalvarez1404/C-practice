#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_anagram(char *w1, char *w2);

int main()
{
  char w1[] = "listen";
  char w2[] = "silent";
  bool validate_anagram = is_anagram(w1,w2);

  if(validate_anagram) 
    printf("%s and %s are an anagram.", w1, w2);
  else 
    printf("%s and %s are not an anagram.", w1, w2);

  return 0;
}

bool is_anagram(char *w1, char *w2)
{
  int f_len = strlen(w1);
  int s_len = strlen(w2);
  bool is_anagram = false;

  if(f_len != s_len) return false;

  for(int i = 0; i < f_len; i++)
  {
    is_anagram = false;
    for(int y = 0; y < s_len; y++)
    {
      if(w1[i] == w2[y])
      {
        is_anagram = true;
        break;
      }
    }
    if(!is_anagram) return false;
  }

  return true;
}
