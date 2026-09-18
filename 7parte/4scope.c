#include <stdio.h>

int main() {

  { // x's block-scope is within this curly
    int x = 42;
  }// and this curly brace
  printf("x is = %d\n", x);

  return 0;
}