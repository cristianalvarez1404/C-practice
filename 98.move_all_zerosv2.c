#include <stdio.h>

void shift_zeros(int array[], int length);

int main(void)
{
  int data[] = {2,0,5,6,0,0,7,0,4,7};
  int len = 10;
  
  shift_zeros(data, len);

  for(int i = 0; i < 10; i++)
    printf("%d ", data[i]);

  return 0;
}

void shift_zeros(int array[], int length)
{
  int count = 0;
  for(int i = 0; i < length; i++)
  {
    if(array[i] != 0)
    {
      array[count] = array[i];
      count++;
    }
  }

  for(int i = count; i < length; i++)
    array[i] = 0;
}