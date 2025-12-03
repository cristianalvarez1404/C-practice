#include <stdio.h>

int main(){
  //Bitwise operators => OR,AND & NOT
  /*
    & => AND
    | => OR
    ~ => NOT
    << => Left shift
    >> => Right shift
    ^ => XOR
  */

  char x = 1, y = 2; //x = 1(0000 0001), y = 2(0000 0010)

  if(x & y){
    printf("Result of x&y is 1 => 0(0000 0000)");
  }

  if(x && y){
    printf("Result of x&&y is 1 => TRUE && TRUE = TRUE = 1");
  }


  return 0;
}