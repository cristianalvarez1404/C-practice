#include <stdio.h>

int main(){
  /*
  == , != , <= , >= , < , >
  */

  /*
    && ||
  */

  int a = 5;

  if(a == 5 && a != 6 && a <= 56 && a > 4){
    printf("Welcome to this beautiful world of operators\n");
  }

  if(!(a == 6)){
    printf("Welcome again!\n\n");
  }

  int x = 5, y = 3;
  int incr;

  incr = (x > y) || (y++);
  printf("%d\n", incr);
  printf("%d\n", y);

  return 0;
}