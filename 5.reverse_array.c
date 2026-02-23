#include <stdio.h>

void print_arr(int arr[], int size_arr){
  printf("Array: \n");

  for(int y = 0; y < size_arr ; y++)
    printf("%d ", arr[y]);
}

// void reverse_arr(int arr[], int size_arr, int arr_reversed[]){
//   int position = 0;

//   for(int i = size_arr - 1; i >= 0; i--){
//     arr_reversed[position] = arr[i];
//     position++;
//   }
// }

void reverse_arr(int arr[], int size_arr, int arr_reversed[]){
  int temp = 0;

  for(int i = 0; i < (size_arr / 2); i++ ){
    temp = arr[i];
    arr_reversed[i] = arr[size_arr - i - 1];
    arr_reversed[size_arr - i - 1] = arr[temp];
  }
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int size_arr = sizeof(arr) / sizeof(int);
  int arr_reversed[size_arr];
  
  //Reverse array
  reverse_arr(arr,size_arr, arr_reversed);
  
  //Print new array
  print_arr(arr_reversed,size_arr);

  return 0;
}