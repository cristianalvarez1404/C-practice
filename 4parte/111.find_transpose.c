#include <stdio.h>

#define M 3
#define N 4

void transpose(int A[M][N], int T[N][M]);

int main()
{
  int A[M][N] = {
    {1,  2,  3,   4},
    {5,  6,  7,   8},
    {9,  10, 11, 12},
  };

  int T[N][M];

  for(int i = 0; i < N; i++)
  {
    for(int j = 0; j < M; j++)
      printf("%d ",i, j,T[i][j]);
      
    printf("\n");
  }

  return 0;
}

void transpose(int A[M][N], int T[N][M])
{
  for(int i = 0; i < M; i++)
  {
    for(int j = 0; j < N; j++)
    {
      T[j][i] = A[i][j];
    }
  }
}