#include <stdio.h>

void replace(int array[], int length, int value, int new);

int main()
{
  int a[] = {1,2,1,2,1,2,1,2,1,2};
  int length = 10;

  replace(a, length, 2, 3);

  for(int i = 0; i < length; i++)
    printf("%d ", a[i]);

  printf("\n");

  return 0;
}

void replace(int array[], int length, int value, int new)
{
  for(int i = 0; i < length; i++)
    if(array[i] == value)
      array[i] = new;
}