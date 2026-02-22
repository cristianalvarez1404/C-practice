#include <stdio.h>
#include <stdlib.h>

void change_val(int** ptr1){
  int val2 = 46;
  *ptr1 = &val2;
}


int main() {
  int val = 35;
  int* ptr;
  ptr = &val;
  // printf("%d\n", ptr);

  change_val(&ptr);
  printf("%d", *ptr);
  return 0;
}