#include <stdio.h>

int main(){
  //Pointer pointing to an entire array

  // int a[5] = {1, 2, 3, 4, 5};
  // int *p = a; //Name of the array always represents the address of the first element of the array.
  // printf("%d", *p);

  int a[5] = {1, 2, 3, 4, 5};
  int (*p)[5] = &a; // *p indicate that pointer to the whole array of 5 elements - NOT ONE ELEMENT, BUT TO THE ENTIRE ARRAY
  // printf("%p", p);
  // printf("%p", p);
  // printf("%p", *p);
  printf("%p", **p);


  return 0;
}