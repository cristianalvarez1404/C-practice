#include <stdio.h>

int main(){
  // Pointer Arithmetic - Addition

  int a[] = {0,1,2,3,4,5,6,7};
  int *p = &a[0];
  // p = &a[3];
  // p = &a[0 + 3];
  // p = &a[1000 + 3 * 4];
  p = p + 3;
  
  // Pointer Arithmetic - subtration
  // p = p - 3;
  p = &a[3 - 1];
  // printf("%d", *p);

  // Pointer Arithmetic - increment and decrement
  int b[] = {5, 16, 7, 89, 45, 32, 23, 10};
  int *ptr = &b[0];
  printf("%d ", *(ptr++)); // We can pay attention to pre or pro increment
  printf("%d", *ptr);

  return 0;
}