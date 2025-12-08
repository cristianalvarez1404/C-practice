#include <stdio.h>

int main(){
  int x, y;
  printf("Enter the two numbers you want to add: ");
  scanf("%d %d", &x, &y);

  while(y != 0){
    x++;
    y--;
  }

  printf("Sum of two values is %d", x);

  return 0;
}