#include <stdio.h>

int main(){
  //Linked list vs Arrays
  int arr[] = {45, 98, 3};
  int n, i;
  n = sizeof(arr) / sizeof(int);
  
  for(i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}