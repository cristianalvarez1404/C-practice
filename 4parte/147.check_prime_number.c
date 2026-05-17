#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number);

int main()
{
  if(is_prime(4)) printf("4 is prime!");
  else printf("4 is not prime!\n");

  return 0;
}

bool is_prime(int number)
{
  if(number <= 1) return false;

  for(int i = 2; i < (number / 2); i++)
    if(number % i == 0) return false;
  
  return true;
}