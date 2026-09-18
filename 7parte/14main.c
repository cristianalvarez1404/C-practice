#include <stdio.h>
#include <stdlib.h>
#include "example.h"

int main(){
  vector_h first;
  first.x = 7.0f;
  first.y = 5.0f;

  vector_h second;
  second.x = 1.0f;
  second.y = 1.0f;

  Add(&first, &second);
  printf("first.x = %2f, first.y = %2f", first.x, first.y);

  return 0;
}