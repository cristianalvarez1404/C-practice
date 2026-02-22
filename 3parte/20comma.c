#include <stdio.h>

int main(){

  int a = 3, b = 4, c = 8;
  int d = (3, 4, 8);
  int var = (printf("%s\n", "Hello!"), 5);
  int x;
  x = 3, 5 ,7;
  int y = (3, 5, 7);
  int var2;
  int num;

  num = (var2 = 15, var2+35);
  printf("%d\n", num);
  // printf("%d\n", d);
  // printf("%d\n", var);
  // printf("%d\n", x);
  // printf("%d\n", y);
  return 0;
}