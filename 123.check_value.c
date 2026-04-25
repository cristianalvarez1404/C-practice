#include <stdio.h>
#include <stdbool.h>

bool includes(int array[], int length, int value);

int main(void)
{
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  int length = 10;

  if(includes(a,length,7))
    printf("7 is in array\n");
  else
    printf("7 is not in array\n");

  return 0;
}

bool includes(int array[], int length, int value)
{
  for(int i = 0; i < length; i++){
    if(array[i] == value) 
      return true;
  }
  return false;
}