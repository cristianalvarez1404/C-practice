#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int myarray[] = {5,9,10,1,4,3,8,6,7,2};
  int size_arr = sizeof(myarray) / sizeof(myarray[0]);
  int min;
  min = myarray[0];

  for(int i = 1; i < size_arr; i++)
    if(myarray[i] < min)
      min = myarray[i];

  printf("El numero menor es: %d",min);
  return 0;
}