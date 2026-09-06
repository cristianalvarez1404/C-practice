#include <stdio.h>
#include <stdlib.h>

void print_2D_array(int* array, int rows, int cols){
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("%d\t",array[i * cols + j]);
    }
    printf("\n");
  }
}

int main(int argc, char** argv) {
  
  //Rows by Cols
  int array_2D[5][4];
  int* array_2D_ = (int*)malloc(sizeof(int) * 5 * 4); 

  int counter = 0;
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 4; j++) {
      array_2D[i][j] = counter++; 
    }
  }

  //Print our 2D array
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 4; j++) {
      printf("%d\t", array_2D[i][j]);
    }
    printf("\n");
  }

  //print out 2D array
  print_2D_array(array_2D_,5,4);

  return 0;
}