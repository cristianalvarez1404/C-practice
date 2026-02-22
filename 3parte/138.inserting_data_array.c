#include <stdio.h>

int add_beg(int arr[], int n, int data ){
  int i;
  for(i = n - 1; i >= 0; i--){
    arr[i + 1] = arr[i]; 
  }
  arr[0] = data;
  return n + 1;
}


int main(){
  //Inserting data at the beginning => the best option is linked list 0(1), arrays are 0(n)
  int arr[10], data = 10, i , n;
  prinf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter the elements: ");
  for(i = 0; i < n; i++)
    scanf("%d",&arr[i]);

  n = add_beg(arr, n, data);

  for(i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}