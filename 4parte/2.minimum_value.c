#include <stdio.h>
#include <stdlib.h>

int find_min(int array[], int length);

int main(){
  int myarray1[] = {5,9,10,1,4,3,8,6,7,2};
  int myarray2[] = {2,5,9,2,5,3,0};
  int size_arr, i;
  int *ptr;

  printf("Enter the size of the array :\n");
  scanf("%d", &size_arr);

  ptr = malloc(size_arr * sizeof(int));

  if(ptr == NULL){
    printf("Memory allocation failed\n");
    return 1;
  }

  for(i = 0; i < size_arr; i++){
    printf("Enter number %d of the array: ", i);
    scanf("%d",&ptr[i]);
  }

  int min = find_min(ptr,size_arr);

  printf("Minimum value: %d", min);

  free(ptr);

  return 0;
}

int find_min(int array[], int length){
  int min;
  min = array[0];

  for(int i = 1; i < length; i++)
    if(array[i] < min)
      min = array[i];

  return min;
}