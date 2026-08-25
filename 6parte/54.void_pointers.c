#include <stdio.h>
#include <stdlib.h>

void sayhello(){
  printf("Hello\n");
}

int main(){
  sayhello();

  int x = 0xFEEDBEEF;
  int y;
  void *p = malloc(sizeof(int));
  int *ip = &x;

  p = ip;
  *ip = 0x00C0FFEE;
  *(int*)*p = 0xDEADBEEF;

  printf("sizeof(void*) = %zu\n", sizeof(p));
  printf("sizeof(int*) = %zu\n", sizeof(ip));
  
  printf("p -> %p\n", p);
  printf("ip -> %p\n", ip);
  free(p);
}