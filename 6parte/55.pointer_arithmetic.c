#include <stdio.h>
#include <stdlib.h>

int main(){
  int x = 0xFEEDBEEF;
  void *p = &x;
  int *ip = malloc(sizeof(int));

  *ip = 0x00C0FFEE;
  *(int*)p = 0xDEADBEEFF;
  printf("sizeof(void*) = %zu\n", sizeof(p));
  printf("sizeof(int*) = %zu\n", sizeof(ip));

  printf("p -> %p (%x)\n", p, *(int*)p);
  printf("ip -> %p (%x)\n", ip, *ip);
  
  printf("ip+2 -> %p\n", ip+2);
  printf("p+2 -> %p\n", p+2);

  free(ip);

  return 0;
}