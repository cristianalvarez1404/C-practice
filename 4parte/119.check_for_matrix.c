#include <stdio.h>
#include <stdbool.h>

#define ROWS 3
#define COLS 4

bool matrix_equality(int A[ROWS][COLS], int B[ROWS][COLS]);

int main(void)
{
  int A[ROWS][COLS] = {
                        {1, 2, 3, 4},
                        {1, 2, 3, 4},
                        {1, 2, 3, 4},
                      };
  
  int B[ROWS][COLS] = {
                        {1, 2, 3, 4},
                        {1, 2, 5, 4},
                        {1, 2, 3, 4},
                      };
                     
  if(matrix_equality(A,B))
    printf("Matrix ARE equal.\n");
  else
    printf("Matrix ARE NOT equal.\n");
  
  return 0;
}

bool matrix_equality(int A[ROWS][COLS], int B[ROWS][COLS])
{
  for(int i = 0; i < ROWS; i++){
    for(int j = 0; j < COLS; j++){
      if(A[i][j] != B[i][j])
        return false;
    }
  }
}