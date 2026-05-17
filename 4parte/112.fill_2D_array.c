#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 4

void fill_random(int array[ROWS][COLS], int max);

int main(void)
{
  srand(time(NULL));

  int A[ROWS][COLS] = {0};

  fill_random(A, 10);

  for(int i = 0; i < ROWS; i++)
  {
    for(int j = 0; j < COLS; j++){
      printf("%3d ", A[i][j]);
    }
    
    printf("\n");
  }

  return 0;
}

void fill_random(int array[ROWS][COLS], int max)
{
  for(int i = 0; i < ROWS; i++)
  {
    for(int j = 0; j < COLS; j++)
    {
      array[i][j] = (rand() % max) + 1;
    }
  }

}