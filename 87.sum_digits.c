#include <stdio.h>

int main()
{
  int number = 0;
  int sum = 0;
  int digit = 0;

  printf("Enter number: ");
  scanf("%d", &number);

  while(number != 0)
  {
    digit = number % 10;
    sum += digit;
    number = number / 10;
  }

  printf("sum: %d\n", sum);

  return 0;
}