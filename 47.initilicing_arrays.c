#include <stdio.h>

int main(){
  //1
  int arr1[5] = {1, 2, 5, 67, 32};
  //2
  int arr2[] = {1, 2, 5, 67, 32}; //much better
  //3
  int arr3[5];
  arr3[0] = 1;
  arr3[1] = 2;
  arr3[2] = 5;
  arr3[3] = 67;
  arr3[4] = 32;
  //4
  int arr4[5];

  for(int i = 0; i < 5; i++){
    scanf("%d", &arr4[i]);
  }
  //5
  int arr5[10] = {0}; //add always 0


  return 0;
}