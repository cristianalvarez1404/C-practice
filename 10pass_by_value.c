#include <stdio.h>

void set_value(int *new_value){
  *(new_value) = 9999;
}

int main() {
  int x = 42;
  set_value(&x);

  printf("x is: %d\n", x);
  return 0;
}