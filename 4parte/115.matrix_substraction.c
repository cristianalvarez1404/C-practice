#include <stdio.h>

#define ROWS 3
#define COLS 4

void matrix_sub(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]);

int main()
{
  int A[ROWS][COLS] = {{1,1,1,1},{1,1,1,1},{1,1,1,1}};
  int B[ROWS][COLS] = {{2,2,2,2},{2,2,2,2},{2,2,2,2}};
  int C[ROWS][COLS] = {0};

  matrix_sub(A,B,C);

  for(int i = 0; i < ROWS; i++)
    for(int j = 0; j < COLS; j++)
      printf("C[%d][%d] = %d\n", i, j, C[i][j]);

  return 0;
}

void matrix_sub(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS])
{
  for(int i = 0; i < ROWS; i++)
    for(int j = 0; j < COLS; j++)
      C[i][j] = A[i][j] - B[i][j];
}