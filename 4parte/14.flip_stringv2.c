#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void letter_flip(char *s);

int main(void){
  char s[] = "abcdeABCDE";
  letter_flip(s);

  printf("output: %s\n", s);
  return 0;
}

void letter_flip(char *s){
  int length = strlen(s);

  for(int i = 0; i < length; i++){
    if(isupper(s[i]))
      s[i] = tolower(s[i]);
    else if(islower(s[i]))
      s[i] = toupper(s[i]);
  }

}