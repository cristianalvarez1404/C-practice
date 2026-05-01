#include <stdio.h>

int main()
{
  int x = 25;
  int y = 35;

  x = x ^ y;
  y = x ^ y;
  x = x ^ y;
  
  printf("x: %d, y: %d\n", x, y);

  return 0;
}


// int main()
// {
//   int x = 25;
//   int y = 35;
//   int temp;

//   temp = x;
//   x = y;
//   y = temp;

//   printf("x: %d, y: %d\n", x, y);

//   return 0;
// }