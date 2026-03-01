#include <stdio.h>

int main(void){
  // int a[] = {1,2,3,4,5};
  // int *b;
  // b = a;
  // a[0] = 10;
  // printf("b[0] = %d\n", b[0]);
  // printf("a[0] = %d\n", a[0]);

  int a[5] = {1,2,3,4,5};
  int copy[5];

  for(int i = 0; i < 5; i++)
    copy[i] = a[i];

  for(int i = 0; i < 5; i++)
    printf("copy[%d]=%d\n", i, copy[i]);

  return 0;
}