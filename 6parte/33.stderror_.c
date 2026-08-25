#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  if(argc != 2)
  {
    fprintf(stderr, "Error: you missed the argument.\n");
    return EXIT_FAILURE;
  }
  
  printf("Hello world\n");
  printf("Arg 1 = %s\n", argv[1]);
  return EXIT_SUCCESS;
}