#include <stdio.h>

int main(void)
{
  int i = 0;

  while(i <= 99)
  {
    printf("%02d ", i);
    i++;
    if(i % 10 == 0) printf("\n");
  }

  return 0;
}