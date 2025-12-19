#include <stdio.h>

int add(int b[], int len){ // b[] is equivalent to a pointer *p based in the base name of array 
  int sum = 0, i;

  for(i = 0; i < len; i++)
    sum += b[i];

  return sum;
}

int main(){
  int a[] = {1, 2, 3, 4};
  int len = sizeof(a) / sizeof(a[0]);
  printf("%d", add(a, len)); // we pass a pointer as base name of array

  return 0;
}