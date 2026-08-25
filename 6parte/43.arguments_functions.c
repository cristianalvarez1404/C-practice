#include <stdio.h>

int y = 5;

void dumb_function(int *a1, int *a2){
  *a1 = *a1 + 1;
  *a2 = *a2 - 1;
}

int main() {
  int x = 4;

  dumb_function(&x,&y);
  printf("x=%d, y=%d\n", x, y);
}