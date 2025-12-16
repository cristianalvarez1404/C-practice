#include <stdio.h>

//Returning pointer
//Remember never ever return a local variable of a function, because this variables are destroyed when the function finish.

int *findMid(int a[], int n){
  return &a[ n / 2]; // Returning an address is equivalent to returning a pointer.
}

int main(){
  int a[] = {1, 2, 3, 4, 5};
  int n = sizeof(a) / sizeof(a[0]);
  int *mid = findMid(a, n);
  printf("%d", *mid);

  return 0;
}