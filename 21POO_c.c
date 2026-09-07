#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct array {
  // Pointer to 'self' in other languages, called 'this'
  struct array* self;

  //Actual 'member variables'
  int* data;
  size_t size;

  //Member functions or methods that we implement from scratch
  //Could embed these in another struct to change behavior of the different functions

  void (*pfnSet)(struct array*, size_t, int);
  int (*pfnGet)(struct array*, size_t);
} array_t;

// Retrieve data
int Get_array_t(array_t* self, size_t index){
  return self->data[index];
}

void Set_array_t(array_t* self, size_t index, int value){
  if(NULL == self){
    return;
  }
  if(index >= 0 && index < self->size){
    self->data[index] = value;
  }
}

// Array Constructor
array_t* make_array(size_t capacity){
  array_t* new_array = (array_t*)malloc(sizeof(array_t));
  //Store the pointer back to the memory that holds our actual object
  new_array->self = new_array;
  new_array->data = (int*)malloc(sizeof(int)*capacity);
  new_array->size = capacity;
  //set up the function pointers
  new_array->pfnSet = Set_array_t;
  new_array->pfnGet = Get_array_t;

  return new_array;
}

//Array destructor
void destroy_array(array_t* self){
  free(self->data);
  free(self);
}

int main(){
  array_t* test = make_array(10);

  // Set all of the values
  for(int i = 0; i < test->size; i++){
    test->pfnSet(test->self, i, i);
  }
  // Retrieve all of the values
  for(int i = 0; i < test->size; i++){
    printf("%d\n", test->pfnGet(test->self, i));
  } 
  destroy_array(test);

  return 0;
}

