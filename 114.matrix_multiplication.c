#include <stdio.h>

#define M 3
#define N 4
#define P 3

void matrix_mult(int A[M][N], int B[N][P], int C[M][P]);

int main()
{
  int A[M][N] = {
    {2,1,0,3},
    {1,0,3,1},
    {2,1,3,0}
  };

  int B[N][P] = {
    {2,1,1},
    {1,0,0},
    {3,3,3},
    {0,2,2}
  };

  int C[M][P];

  matrix_mult(A,B,C);

  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < P; j++)
    {
      printf("%4d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void matrix_mult(int A[M][N], int B[N][P], int C[M][P])
{
  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < P; j++)
    {
      C[i][j] = 0;
      for(int k = 0; k < N; k++)
      {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

}