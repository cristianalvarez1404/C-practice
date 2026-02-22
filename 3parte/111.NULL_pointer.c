#include <stdio.h>

int main(){
  //NULL pointers => It's a pointer that does not point to any memory location. It represents an invalid memory location.

  //When a NULL value is assigned to a pointer, then the pointer is considered as NULL pointer.

  //It is used to initialize a pointer when that pointer isn´t assigned any valid memory address yet. 

  //Useful for handling errros when using malloc function.
  
  //The value of NULL is 0 normaly 8 bytes

  // int *ptr = NULL; => GOOD PRACTICE
  
  int *ptr;

  ptr = (int*)malloc(2*sizeof(int));
  if(ptr == NULL)
    printf("Memory could not be allocated");
  else
    printf("Memory allocated successfully");

  printf("%d",sizeof(NULL)); // 8 bytes
  return 0;
}