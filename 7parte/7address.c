#include <stdio.h>

int main() {

  int x = 42;

  //Prints out the 'address'
  //That's what %p - format specfier gives us
  printf("%p\n", &x);
  //If we want the value, in &(x)
  printf("%d\n", *(&x)); //* dereferencing => retrieve the value

  return 0;
}