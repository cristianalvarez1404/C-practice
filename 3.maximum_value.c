#include <stdio.h>


int max_num(int arr[], int size_arr){
  int max = arr[0];

  for(int i = 1; i < size_arr; i++)
    if(arr[i] > max)
      max = arr[i];

  return max;
}

int main(){
  int arr[] = {2,4,8,10,1,15,6,24};
  int size_arr = (sizeof(arr) / sizeof(int));
  int max;
  max = max_num(arr,size_arr);

  printf("Max number: %d\n", max);
  return 0;
}