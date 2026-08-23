#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUMLETTERS 26

int main() {
  
  char somechars[NUMLETTERS];
  for(int i = 0; i < NUMLETTERS; i++){
    somechars[i] = 'a' + i;
  }

  printf("An element: %c\n", somechars[50]);

  return 0;
}