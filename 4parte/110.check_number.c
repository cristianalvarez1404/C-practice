#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_armstrong(int number);

int main(void)
{
  if(is_armstrong(371))
    printf("371 is an armstrong number!\n");
  else
    printf("371 is NOT an armstrong number!\n");

  return 0;
}

bool is_armstrong(int number)
{
  int total_digits = 0;
  int digits_left = number;

  while(digits_left != 0)
  {
    total_digits++;
    digits_left /= 10;
  }

  int digit = 0;
  int total = 0;
  int number_left = number;

  while(number_left != 0)
  {
    digit = number_left % 10;
    total += pow(digit, total_digits);
    number_left /= 10;
  }

  return (total == number);
}