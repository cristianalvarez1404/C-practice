#include <stdio.h>
#include <stdlib.h>

int main(){
  //Dynamic memory allocation (When we don't kwnow the array length)
  int size_of_array = 0;
  scanf("%d", &size_of_array);

  int *dynamic_array = malloc(sizeof(int) * size_of_array);
  
  // dynamic_array[0] = 23;
  // dynamic_array[1] = 76;
  // dynamic_array[2] = 0;
  // dynamic_array[3] = 5;
  // dynamic_array[4] = 81;

  for(int i = 0; i < size_of_array; i++) {
    dynamic_array[i] = 0;
  }

  free(dynamic_array);
  
  return 0;
}