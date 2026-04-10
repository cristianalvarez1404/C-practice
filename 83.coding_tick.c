#include <stdio.h>

int main()
{
  int a[] = {
    #include "data.txt"
  };

  for(int i = 0; i < 10; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;
}