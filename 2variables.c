#include <stdio.h>

int main() {

  int x = 42;
  x = 34;

  float pi = 3.124f;

  printf("x is: %d\n", x);
  printf("pi is: %f\n", pi);
  printf("x is: %d pi is: %f\n", x, pi);

  int x1 = 42;
  int x2 = 42;
  int x3 = 42;
  int x4 = 42;
  int x5 = 42;

  //Data structure => struct
  int array[5];
  array[0] = 23;
  array[1] = 0;
  array[2] = -7;
  array[3] = 45;
  array[3] = 76;

  printf("array[0] = %d\n", array[0]);
  printf("array[1] = %d\n", array[1]);
  printf("array[2] = %d\n", array[2]);
  printf("array[3] = %d\n", array[3]);
  printf("array[4] = %d\n", array[4]);
  return 0;
}