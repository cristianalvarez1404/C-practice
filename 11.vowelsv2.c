#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *s);

int main(){
  char s1[] = "It's a wonderful life!";
  int count = vowel_count(s1);

  printf("Total vowels: %d\n", count);
  return 0;
}

int vowel_count(char *s){
  int count = 0;
  int len = strlen(s);

  for(int i = 0; i < len; i++){
    switch(toupper(s[i]))
    {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        count++;
    }
  }
  return count;
} 