#include <stdio.h>

int num_matches(int arr[],int size_arr,int to_find){
  int count = 0;

  for(int i = 0; i < size_arr; i++)
    if(arr[i] == to_find)
      count++;

  return count;
}

void print_arr(int arr[], int size_arr){
  for(int i = 0; i < size_arr; i++) 
    printf("%d ",arr[i]);
}

int main(){
  int arr[] = {2,4,5,8,2,3,4,6,9,8,8,8,8};
  int size_arr = sizeof(arr) / sizeof(int);
  int count, value = 0;

  printf("Select one number to the following array: \n");
  print_arr(arr,size_arr);
  printf("\n\n");
  scanf("%d", &value);
  
  count = num_matches(arr,size_arr,value);
  printf("Total matches to the number %d : %d",value,count);

  return 0;
}