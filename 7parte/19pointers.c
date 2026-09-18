#include <stdio.h>
#include <stdlib.h>

typedef struct array {
  int* data; //This is the array
  size_t size;
}array_t;

array_t* array_init(size_t size){
  array_t* new_array = (array_t*)malloc(sizeof(array_t));
  new_array->size = size;
  new_array->data = (int*)malloc(sizeof(int)*size);
  
  return new_array;
}

void print_array1(array_t* my_array){
  for(int i = 0; i < my_array->size; i++){
    printf("%d\n", my_array->data[i]);
  }

  //printf("param: %ld\n", my_array->data[i]);
}

void print_array(int param[], size_t size){
  for(int i = 0; i < size; i++){
    printf("%d\n", param[i]);
  }

  //printf("param: %ld\n", sizeof(param));
}

int main(int argc, char** argv){
  //Pointers are not arrays

  /*
    Arrays: Contiguos block of memory
    char array[7] !=  char* OR char**
    char** argv == char* argv[];
  */

  // int array[7];
  // for(int i = 0; i < 7; i++){
  //   array[i] = i;
  // }

  // for(int i = 0; i < 7; i++){
  //   printf("%d\n",array[i]);
  // }

  // printf("%ld\n", sizeof(array));

  // int *p_array = &array;
  // for(int i = 0; i < 7; i++){
  //   printf("%d\n", p_array[i]);
  // }

  //------------------------------------------------
  array_t* some_data = array_init(8);
  print_array1(some_data);


  return 0;
}