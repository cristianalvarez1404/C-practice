#include <stdio.h>
#define N 10 //This is a macro

int main(){
  //Array =>it's a data structure and large chunck of memory divided into smaller block of memory and each block is capable of storing a data value of SAME TYPE(ON C).
  //data_type name_of_array[n_elements]
  int arr[5] = {1, 2, 3, 4, 5};
  printf("%d\n", sizeof(arr));

  //access to an array index => array[index]
  printf("%d\n",arr[1]);

  //Specifying the length of an array using macro is considered to be an excellent practice
  int arr2[N];

  return 0;
}