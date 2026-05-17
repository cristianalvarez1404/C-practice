#include <stdio.h>

double average(double a[], int n);

int main(void)
{
  double array[] = {1,2,3,4,5,6,7,8,9,10};
  int length = 10;

  printf("average: %f\n", average(array, length));

  return 0;
}

double average(double a[], int n)
{
  if(n == 1) return a[n - 1];
  else return (average(a, n - 1) * (n - 1) + a[n - 1]) / n;
}