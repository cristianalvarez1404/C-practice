#include <stdio.h>

int main(){

  int a[3][5]; // Two dimensional array1
  int b[3][4][6]; // Three dimensional array
  
  //1. first definition
  int c[2][3] = {1, 2, 3, 4, 5, 6};

  //2. Second definition
  int d[2][3] = {{1, 2, 3}, {4, 5, 6}};

  //print array 1D

  int e[] = {1, 2, 3, 4, 5};
  int size_arr = sizeof(e) / sizeof(e[0]); 

  for(int i = 0; i < size_arr; i++){
    printf("%d ", e[i]);
  }

  printf("\n");
  //print array 2D
  int f[2][3] = {{1, 2, 3},{4, 5, 6}};

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ",f[i][j]);
    }
  }

  printf("\n");
  //print array 3D
  int g[2][2][3] = {{{1, 2, 3}, {4, 5, 6}},
                    {{7, 8, 9}, {10, 11, 12}}};

  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++){
      for(int k = 0; k < 3; k++){
        printf("%d ",g[i][j][k]);
      }
    }
  }


  return 0;
}