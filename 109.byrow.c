#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

#define ROWS 100000
#define COLS 10000
int twodarray[ROWS][COLS]; //4GB

int main() {
  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLS; j++) {
      twodarray[i][j] = rand();
    }
  }
  
  int64_t sum = 0;

  for(int i = 0; i < ROWS; i++) {
    for(int j = 0; j < COLS; j++) {
      sum += twodarray[i][j];
    }
  }
  printf("sum = %lld\n", sum);
}