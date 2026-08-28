#include <stdio.h>

int main(){

  int x = 42;
  puts("Enter a number for x: ");
  scanf("%d", &x);

  if(x >= 0 && x < 50) {
    printf("x is in our range\n");
  }

  if(x >= 0 || x < 50) {
    printf("x is in our range\n");
  }

  if(x > 0) {
    printf("x is positive\n");
  }
  else if(x == 0){
    printf("x is 0");
  }
  else {
    printf("x is negative\n");
  }

  return 0;
}