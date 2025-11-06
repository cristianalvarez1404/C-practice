#include <stdio.h>

int main(){
  int x, y, result;

  printf("Please enter a number:\n");
  scanf("%d",&x);
  printf("Please enter an another number:\n");
  scanf("%d",&y);

  printf("{ x : %d\n, y : %d }\n", x,y);
  result = x + y;
  printf("The sum of variables is : => %d", result);

  return 0;
}