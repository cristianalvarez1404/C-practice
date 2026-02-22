#include <stdio.h>

int main(){
  //Wild pointers => They're also known as uninitilized pointers.

  //These pointers usually point to some ARTIBRARY MEMORY LOCATION and may cause a program to crash or misbehave

  int *p; // This pointer has not been initialized yet
  *p = 10; // We try to dereference this pointer, trying to access to its location, but the location does not exist.

  //How to avoid them:
  /*
    1.Initialize them with the address of a known variable.
    2.Explicity allocate the memory and put the values in the allocated memory
      int *p = (int *)malloc(sizeof(int));
      *p = 10;
      free(p);
  */

  int var = 10;
  int *ptr; 
  ptr = &var; //No more a wild pointer
  
  return 0;
}