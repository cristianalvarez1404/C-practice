#include <stdio.h>

int main(){
  int a[] = {11, 22, 36, 5, 2};
  int sum = 0, *ptr;

  for(ptr = &a[0]; ptr <= &a[4]; ptr++){
    sum += *ptr;
  }

  printf("Sum is %d", sum);

  return 0;
}