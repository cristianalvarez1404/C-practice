#include <stdio.h>

#define ROWS 5
#define COLS 4

void swap_rows(int array[ROWS][COLS], int rowA, int rowB);

int main(void)
{
  int A[ROWS][COLS] = 
  {
    {1,1,1,1},
    {2,2,2,2},
    {3,3,3,3},
    {4,4,4,4},
    {5,5,5,5}
  };

  swap_rows(A, 1, 3);

  for(int i = 0; i < ROWS; i++)
  {
    for(int j = 0; j < COLS; j++)
    {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void swap_rows(int array[ROWS][COLS], int rowA, int rowB)
{
  int temp = 0;
  for(int i = 0; i < COLS; i++)
  {
    temp = array[rowA][i];
    array[rowA][i] = array[rowB][i];
    array[rowB][i] = temp;
  }
}