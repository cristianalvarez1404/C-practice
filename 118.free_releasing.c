#include <stdio.h>
#include <stdlib.h>

int *input(){
  int *ptr, i;
  ptr = (int *)malloc(5 * sizeof(int));
  printf("Enter 5 numbers: ");
  for(i = 0; i < 5 ; i++)
    scanf("%d", ptr + i);

  return ptr;
}

int main(){
  //free() function is used to release(librerar) the dynamically allocated memory in heap.

  // void free(ptr);

  //The memory allocated in heap will not be released automatically after using the memory. The space remains there and can't be used.

  //It is the programmer's responsibility to release the memory after use.

  //int *ptr = (int *)malloc(4 * sizeof(int));

  //free(ptr); // deallocate the memory

  int i, sum = 0;
  int *ptr = input();

  for(i = 0; i < 5; i++)
    sum += *(ptr + i);

  printf("Sum is: %d", sum);
  free(ptr);
  ptr = NULL;
  
  return 0;
}