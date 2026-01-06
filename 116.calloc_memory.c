#include <stdio.h>
#include <stdlib.h>

int main(){
  //calloc() => CLEAR ALLOCATION
  //malloc() => MEMORY ALLOCATION

  //Dynamic memory allocation using calloc() - CLEAR ALLOCATION
  //calloc() function is used to dynamically allocate multiple blocks of memory.

  /*
    It's different to malloc() in two ways:
      - calloc() needs two arguments insteand of just one
        void *calloc(size_t n, size_t size); => n number of blocks, s size of each block
  */

  int *ptr = (int *)calloc(10, sizeof(int));

  /*
    CHECK THIS => Memory allocated by calloc is initilized to ZERO - 0
    It is not the case with malloc. Memory allocated by malloc is initilized with some GARBAGE VALUE. Both returns NULL when there's not memory in the heap
  
  */

  return 0;
}