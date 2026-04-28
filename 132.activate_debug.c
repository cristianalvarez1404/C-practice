#include <stdio.h>

#define DEBUG_OUTPUT 0

int main()
{
  int a[] = {0,1,2,3,4,5,6,7,8,9};

  for(int i = 0; i < 10; i++)
    a[i] = a[i] * 5;

  #ifdef DEBUG_OUTPUT
  for(int i = 0; i < 10; i++)
    printf("a[%d] = %d\n", i, a[i]);
  #endif

  #ifdef DEBUG_OUTPUT
    printf("Additional output statment.\n");
  #endif

  int sum = 0;
  for(int i = 0; i < 10; i++)
    sum += a[i];
  printf("sum = %d\n", sum);

  return 0;
}