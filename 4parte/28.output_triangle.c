#include <stdio.h>

int main(void)
{
  char sign = '*';

  for(int i = 0; i < 30; i++)
  {
    for(int y = 0; y <= i; y++)
    {
      printf("%c",sign);
    }
    printf("\n");
  }

  return 0;
}