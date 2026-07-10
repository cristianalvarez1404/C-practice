#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// #define A 10
const int A = 10;
const int B = A+1;

int main(int argc, char **argv) {
  printf("&A = %p\n", &A);
  printf("&B = %p\n", &B);
}