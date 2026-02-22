#include <stdio.h>

int main(){
  int a, b;
  printf("Enter the first number\n");
  scanf("%d", &a);

  printf("Enter the second number\n");
  scanf("%d", &b);

  printf("a / b = %d\n", a / b);
  printf("a %% b = %d", a % b);

  return 0;
}