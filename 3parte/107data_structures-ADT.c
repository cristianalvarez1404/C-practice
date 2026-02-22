#include <stdio.h>

int main(){
  // Data types vs abstract data types
  // Data types => Defines a certain domain of values and define operations allowed on these values. Int=> only integers(mul,sum, rest, so on) .Example user defined data types => struct, union, int
  
  //ADTs => Abstract data types are like user defined data types witch defines operations on values using functions without specifying what is there inside the function and how the operations are performed. 

  // Stack ADT =>  Abstract data type
  // A stack consist of elements of same type arranged in a sequential order. Example => initialice(), pop(), push(), isEmpty(). Here we dont know how the function resolve its funcionality, only we invoked them.

  //We can implement ADT using arrays or linked lists

  //The program which USES data structure is called a CLIENT PROGRAM. It has access to the ADT(Abstract data type) i.e interface, just abstract only interface.
  // The program which IMPLEMENTS the data structure is known as the IMPLEMENTATION


  return 0;
}