#include <stdio.h>
#include "mymath.h"
#include "mymath2.h"

// object files (.o) are compiled code. They contain symbols(names of variables and functions) of our compiled code.
// There are several types of objects files (static, shared, executable) to be aware of. gcc -c ./src/main.c -I./include

/*
  .o files are static libraries. We can statically link together
  a series of .o files together to build a program. .o files
  are compiled for specific architectures.

  gcc main.o mymath.o -o prog
*/

/**
 * The 'ar' (archive) tool builds an index of multiple files
 * that we can package together. This allow us to distribute a static library
 * that may consist of multiple .o files packaged together.
 */


int main() {

  printf("add(4,7) = %d\n", add(4,7));
  printf("mult(4,7) = %d\n", mult(4,7));

  return 0;
}