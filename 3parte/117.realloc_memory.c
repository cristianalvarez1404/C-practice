#include <stdio.h>
#include <stdlib.h>

int main(){
  //realloc() => function is used to change the size of the memory block without losing the old data.

  //This function moves the contents of the old block to a new block and the data of the old block is not lost.

  //WE MAY LOST THE DATA WHEN THE NEW SIZE IS SMALLER THAN THE OLD SIZE.

  // void *realloc(void *ptr, size_t newSize)

  // int *ptr = (int *)malloc(sizeof(int));
  // ptr = (int *)realloc(ptr, 2 * sizeof(int));
  
  int i;
  int *ptr = (int *)malloc(2 * sizeof(int));

  if(ptr == NULL){
    printf("Memory not available!");
    exit(1);
  }

  printf("Enter the two numbers: \n");
  for(i = 0; i < 2 ; i++){
    scanf("%d", ptr + i);
  }

  //Memory allocation for 2 more integers
  ptr = (int *)realloc(ptr, 4 * sizeof(int));
  if(ptr == NULL){
    printf("Memory not available!");
    exit(1);
  }

  printf("Enter 2 more integers: \n");
  for(i = 2; i < 4 ; i++){
    scanf("%d", ptr + i);
  }

  //printing the values on the screen
  for(i = 0; i < 4 ; i++){
    printf("%d ", *(ptr + i));
  }

  free(ptr);
  ptr = NULL;

  return 0;
}
