#include <stdio.h>
#include "other.c"

extern int a;

int main(){

  printf("%d", a);
  return 0;
}