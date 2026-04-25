#include <stdio.h>

#define ROWS 3
#define COLS 5

void cols_swap(int A[ROWS][COLS], int colA, int colB);

int main(void)
{
  int A[ROWS][COLS] = 
  {
    {1,2,3,4,5},
    {1,2,3,4,5},
    {1,2,3,4,5},
  };

  cols_swap(A, 1, 3);

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

void cols_swap(int A[ROWS][COLS], int colA, int colB)
{
  int temp = 0;
  for(int i = 0; i < ROWS; i++)
  {
    temp = A[i][colA];
    A[i][colA] = A[i][colB];
    A[i][colB] = temp;
  }
}