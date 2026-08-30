#include <stdio.h>
#include <stdlib.h>

int* allocate_on_heap(int size){
  int* array = (int*)malloc(sizeof(int)*size);
  printf("heap memory address %p\n", array);
  return array;
}

int main(){
  int size = 10;

  foo();
  void* p = malloc(sizeof(int) * 50000);
  int* array = (int*)malloc(sizeof(int) * 50000); //cast
  int* array2 = allocate_on_heap(10);

  free(p);
  free(array);
  free(array2);

  return 0;
}