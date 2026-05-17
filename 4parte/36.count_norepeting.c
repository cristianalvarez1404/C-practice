#include <stdio.h>

int main(void)
{
  int array[] = {1,3,5,7,3,7,6,6,4,2,9};
  int n_rep = 0;
  int num = 6;
  int len = sizeof(array) / sizeof(int);

  for(int i = 0; i < len; i++)
  {
    if(array[i] == num) n_rep++;
  }

  printf("Num %d is repeting in the array: %d times",num, n_rep);

  return 0;
}