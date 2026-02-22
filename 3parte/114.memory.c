#include <stdio.h>

int main(){
  /*--------------------------MEMORY---------------------------*/
  //Static memory allocation(asignación)
    /*
      Memory allocated during compile time is called STATIC MEMORY
      The memory allocated is fixed and cannot be increased or decreased during run time.

      int arr[5] = {1,2,3,4,5}; => arr[5] that the size is fixed. Memory is allocated at COMPILE TIME and is fixed. WE CAN NOT DECREASE ARR[5]

      Problems faced in static memory allocation.
        1.if you are allocating memory for an array during compile time then you have to fix the size at the time of declaration.Size is fixed and USER CANNOT increase or decrease the size of the array at run time.
        
        2.If the value stored by the user in the array at the RUN TIME is less than the size specified then there will be WASTAGE OF MEMORY. and if its more than the size specified then the program may CRASH OR MISBEHAVE.

        BUT, WE HAVE A RECUE "DINAMY MEMORY ALLOCATION"

    */
  //Dynamic memory allocation
    /*
      The process of allocation memory at the time of execution is called DYNAMIC MEMORY ALLOCATION. User allocate memery depends of his needs

      Heap is the segment of memory where dynamic memory allocation takes place.
      Unlike stack where memory is allocated or deallocated in a defined order, heap is an area of memory where memory is allocated or deallocated without any order or randomly.

      There are certain built-in functions that can help in allocating or deallocating some memory space at run time. =>malloc(), calloc(), realloc(), free()

      POINTERS PLAY AN IMPORTANT ROLE IN DYNAMIC MEMORY ALLOCATION.
      ALLOCATED MEMORY CAN ONLY BE ACCESSED THROUGH POINTERS.


    */

  return 0;
}