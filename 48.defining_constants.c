#include <stdio.h>

#define ARRAY_LENGTH 5

//const int ARRAY_LENGTH2 = 5;

int main(){
  const int ARRAY_LENGTH2 = 5;
  const int const *ARRAY_LENGTH3 = 5;

  printf("%d\n", ARRAY_LENGTH);
}