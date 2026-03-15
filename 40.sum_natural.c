#include <stdio.h>

int sum(int n);

int main(void)
{
  printf("%d\n", sum(4));

  return 0;
}

int sum(int n)
{
  if(n > 0) return n + sum(n - 1);
  else return 0;
}