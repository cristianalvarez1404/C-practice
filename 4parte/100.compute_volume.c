#include <stdio.h>

#define PI 3.141592653589

double sphere_volume(double radius);

int main()
{
  printf("%f\n", sphere_volume(3));

  return 0;
}

double sphere_volume(double radius)
{
  return (4/3.0) * PI * (radius * radius * radius);
}