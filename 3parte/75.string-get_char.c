#include <stdio.h>

int input(char str[], int n){
  int ch, i = 0;

  while((ch = getchar()) != '\n') //getchar read input character
    if(i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}

int main(){
  char str[100];
  int n = input(str,10);
  printf("%d %s", n, str);

  return 0;
}