#include <stdio.h>
#include <stdlib.h>

#define NUMINTS 100

int main() 
{
  int *myarray = malloc(sizeof(int)*NUMINTS);

  for(int i = 0; i < NUMINTS; i++){
    myarray[i] = i;
  }

  printf("Done!\n");
  
}