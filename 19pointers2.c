#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  
  //Rows by Cols
  int array_2D[5][4];

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

  return 0;
}