#include <stdio.h>
#include "mymath.h"

// object files (.o) are compiled code. They contain symbols(names of variables and functions) of our compiled code.
// There are several types of objects files (static, shared, executable) to be aware of. gcc -c ./src/main.c -I./include

int main() {

  printf("add(4,7) = %d\n", add(4,7));

  return 0;
}