#include <stdio.h>

int main(){
  //variable length arrays in C
  int n;

  printf("Enter the number of elements you want to reverse: \n");
  scanf("%d", &n);

  int a[n]; // variable length array => the length of array can vary according to the user.
  int i;
  printf("Enter all the %d elements: \n", n);
  for( i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  printf("Elements in reverse order are: \n");
  for(i = n - 1; i >= 0; i--){
    printf("%d ", a[i]);
  }
  
  return 0;
}