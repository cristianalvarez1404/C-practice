#include <stdio.h>

#define ROWS 3
#define COLS 5

int main(void)
{
  int array[ROWS][COLS];

  for(int i = 0; i < ROWS; i++)
  {
    for(int j = 0; j < COLS; j++)
    {
      array[i][j] = j + 1;
      printf("array[%d][%d] = %d\n",i,j,array[i][j]);
    }
  }  
  return 0;
}