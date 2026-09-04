#include <stdio.h>

int main(int argc, char** argv){
  //Pointers are not arrays

  /*
    Arrays: Contiguos block of memory
    char array[7] !=  char* OR char**
    char** argv == char* argv[];
  */

  int array[7];
  for(int i = 0; i < 7; i++){
    array[i] = i;
  }

  for(int i = 0; i < 7; i++){
    print("%d\n",array[i]);
  }

  printf("%ld\n", sizeof(array));

  return 0;
}