#include <stdio.h>

/*
  void* is a 'generic pointer' that can hold any data type.
  void* pointers cannot be dereferenced, we need to cast them to the correct type first.
*/

void print(){
  printf("Called the 'print' function\n");
}

int return42(){
  return 42;
}

int add(int a, int b){
  return a + b;
}

int main(){

  // void* to a int*
  int x = 42;
  void* generic_pointer = &x;

  printf("x is %d\n", *(int*)generic_pointer);
  
  //void* to a void function
  generic_pointer = print;
  ((void(*)()) generic_pointer)();

  generic_pointer = return42;
  int result = ((int(*)())generic_pointer)();
  printf("result is: %d\n", result);

  generic_pointer = add;
  int result2 = ((int(*)(int, int)) generic_pointer)(2, 5);
  printf("result2 is: %d\n", result2);

  int* some_memory = (int*)malloc(4);

  return 0;
}