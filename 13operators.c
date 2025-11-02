#include <stdio.h>

int main(){
  int a = 5;
  int b = 14;
  int z = 0;

  z = (a > b) ? a : b;

  printf("%d", z);

  return 0;
}