#include <stdio.h>

int* fun(){
  int num = 10; // local variable then it'll be destroyed when the function finish 
  return &num; // This is not work
}

int main(){
  // Dangling pointer => it's a pointer which points to some non-existing memory location.

  //int *ptr = (int *)malloc(sizeof(int));

  //free(ptr); // => Deallocate the memory, after that the pointer becomes a dangling (puntero colgante) because it is pointing to the non-existing memory location but POINTER IS STILL POINTING TO THAT MEMORY FOR THIS PROBLEM WE NEED TO REINITIALIZE THE POINTER ptr = NULL; DANGLING POINTERS CAUSE PROBLEMS LATER IN YOUR CODE

  //ptr = NULL;

  /****************************************************************************/
  int *ptr2 = NULL; // => The best practice
  ptr2 = fun();
  printf("%d", *ptr2);

  return 0;
}

