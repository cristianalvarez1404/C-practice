#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char **argv){
  int a = 5000;
  int b = 23;
  int c[1] = {1};
  int d[1] = {2};
  printf("&a=%p\n", &a);
  printf("&b=%p\n", &b);
  printf("&c=%p\n", c);
  printf("&d=%p\n", d);

  int index = atoi(argv[1]);
  d[index] = 42;
  *((&b)+1) = 80;

  printf("a=%d, b=%d, c[0]=%d, d[0]=%d", a, b, c[0], d[0]);

}