#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv) {
  const int x1 = 42; //west const (const west)
  int const x2= 42; //east const

  int const *px = &x1; //pointer to a const int - puedes modificar dirección, no valor
  int * const px = &x1; //const pointer to a int - no puedes modificar dirección, si valor
  int const * const px = &x1; //const pointer to a const int - no puedes modificar dirección, ni valor

  px = &argc;
  *px = 6;
  x1 = 7; // read only

  printf("%i \n", x1);
}