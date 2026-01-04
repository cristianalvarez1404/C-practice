#include <stdio.h>

int main(){

  //void pointer => It's a pointer which has no associated data type with it.
  // It can point to any data of any data type and can be TYPECASTED TO ANY TYPE

  //malloc and calloc function returns a void pointer.Due to this reason, they can allocate a memory for any type of data.

  void* malloc(size_t size);

  int n = 10;
  void *ptr = &n;

  printf("%d", *(int*)ptr); // cast int*

  return 0;
}