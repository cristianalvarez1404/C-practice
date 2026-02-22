#include <stdio.h>

int main(){
  //2D arrays
  // Row major order => Elements are stored row by row
  // Column major order => Elements are stored column by column

  //a [[1,2][3,4]] => address suppose are => 1000,1004 firts row, 1008,1012 row 2.

  // int a[2][2]; the first [2] is 1D array
  //a => 1000
  //a + 1 => 1008
  //*a => returns pointer to the first element = a[0] = &a[0][0]
  //**a => *(*a) => *(*(a + 0)) == *(&a[0][0]) => 1

  return 0;
}