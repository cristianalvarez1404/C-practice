#include <stdio.h>

int main(){
  char name[16];

  printf("Hello, what is your name?\n");
  scanf("%s",name);

  printf("Hello %s",name);
  return 0;
}