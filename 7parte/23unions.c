#include <stdio.h>

typedef union {
  char c;
  int i;
  long long l;
} example_t;

typedef struct {
  float x, y, z, w;
} vec4_t;

typedef union {
  float elements[16];
  vec4_t rows[4];
} matrix_t;

int main(){
  //A union is like a structure in which all of the members are stored at the same address.
  //Only one member in a union is 'active' at one time.
  //occupies its largest member memory

  example_t my_example;
  my_example.l = 100l;
  printf("%lu\n", sizeof(my_example));
  printf("%lld\n", my_example.l);
  printf("%c\n", my_example.c);

  printf("%ld\n", sizeof(matrix_t));

  matrix_t example;
  for(int i = 0; i < 16; i++) {
    example.elements[i] = i;
  }

  printf("%f\n", example.rows[0].x);
  printf("%f\n", example.rows[0].y);
  printf("%f\n", example.rows[0].z);
  printf("%f\n", example.rows[0].w);

  return 0;
}