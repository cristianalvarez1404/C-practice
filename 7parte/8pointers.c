#include <stdio.h>

int main(){
  //Pointers => Point to something. A pointers stores a memory address

  int x = 42;
  printf("Address of x is: %p\n", &(x));
  // Declare a variable, that is a pointer

  // Creating a pointer
  int *px = &x;
  printf("Adress of x is: %p\n", px);

  // Accessing the value, to the thing we point to
  printf("*px, the thing we point to is %d\n", *px);

  int *px2 = &x;


  return 0;
}