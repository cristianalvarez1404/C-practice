#include <stdio.h>

int sum(int num_arr[], int size_arr);

int main(void){
  int num_arr[] = {1,2,3,4,5,8,9,10};
  int size_arr = sizeof(num_arr) / sizeof(int);
  int total = sum(num_arr, size_arr);

  printf("Total sum of array is: %d\n", total);

  return 0;
}

int sum(int num_arr[], int size_arr){
  int total = 0;
  for(int i = 0; i < size_arr; i++)
    total += num_arr[i];

  return total;
}