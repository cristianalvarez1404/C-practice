#include <stdio.h>

int main(){

  // int *ptr;
  // char *ptr2;
  // float *ptr3;

  int x = 5;
  int *ptr;
  ptr = &x; // & => Address of operator
  //printf("%d", *ptr); // => Access to the value of the pointer

  int y = 5, *ptr2 = &y; // => Another way to define a pointer and assigne it address

  int z = 10;
  int *ptr3 = &z;

  *ptr3 = 4; // => Assign a value to the address that contain that pointer

  printf("%d", *ptr3);

  return 0;
}