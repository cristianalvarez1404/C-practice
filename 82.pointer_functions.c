#include <stdio.h>

int add(int a, int b){
  return a + b;
}

int main(){
  int result;
  // Function pointers=> they are like normal pointers but they have the capability to point to a function.

  //int (*ptr)(int, int); //pointer to point a integer function

  // assigning the address of a function to a function pointer
  int (*ptr)(int, int) = &add; 
  //ptr = &add; // we can assign it in this form too
  //int (*ptr)(int, int) = add; => the name of the function represents of that function

  result = ptr(10, 20);

  printf("%d", result);
  return 0;
}