#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double rand_range(double min, double max);

int main(void)
{
  srand(time(NULL));

  for(int i = 0; i < 50; i++)
    printf("%f\n", rand_range(-5,5));

  return 0;
}

double rand_range(double min, double max)
{
  double random = ((double)rand()) / RAND_MAX;
  double range = (max - min) * random;
  double number = min + range;

  return number;
}