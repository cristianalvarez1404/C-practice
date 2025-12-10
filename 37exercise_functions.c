#include <stdio.h>

void f1(int a, int b){
  int c;
  c = a; a = b; b = c; // 4 - 5 - 4
}

void f2(int *a, int *b){
  int c;
  c = *a; // 5
  *a = *b; // 6
  *b = c; // 5
}

int main(){
  int a = 4, b = 5, c = 6;
  f1(a, b);
  f2(&b, &c);
  printf("%d", c - a - b);
  
  return 0;
}