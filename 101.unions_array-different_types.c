#include <stdio.h>

typedef union { // size of union = 8 bytes => we choose this one. The best option is this, because all member of the union are located in one memory.
  int a;
  char b;
  double c;
} data;

typedef struct { // size of struct = 13 bytes => We lost a lot of memory 
  int a;
  char b;
  double c;
} data2;

int main(){
  data arr[10]; // creating an array containing mixed type data.
  arr[0].a = 10;
  arr[1].b = 'a';
  arr[2].c = 10.178;

  printf("%ld", sizeof(arr));

  return 0;
}