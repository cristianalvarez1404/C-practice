#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int ARRAY_LENGTH = 5;

void printarray(int *myarray, int length){
  for(int i=0; i < length; i++){
    printf("%i, ", myarray[i]);
  }
  printf("\n");
}

int main(int argc, char **argv){
  int a[ARRAY_LENGTH] = {1, 2, 3, 4, 5};
  int b[ARRAY_LENGTH] = {5, 4, 3, 2, 1};

  int *p = malloc(sizeof(int) * ARRAY_LENGTH);
  for(int i = 0; i < ARRAY_LENGTH; i++){
    p[i] = i;
  }
  
  int arglength[argc];
  for(int i = 0; i < argc; i++){
    arglength[i] = strlen(argv[i]);
  }
  
  p = realloc(p, sizeof(int) * 20);

  printarray(a, ARRAY_LENGTH);
  printarray(b, ARRAY_LENGTH);
  printarray(p, ARRAY_LENGTH);
  printarray(p, 20);
  printarray(arglength, argc);

  free(p);
}

