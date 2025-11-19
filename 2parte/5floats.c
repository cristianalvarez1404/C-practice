#include <stdio.h>
#include <float.h>

int main(){
  const float PI = 3.14;
  float radius, area;
  double another = 0.0;

  printf("What is the radius in cm?\n");
  scanf("%f",&radius);

  area = radius * radius * PI;
  another = radius * 3;
  printf("The result is: %.2f cm2\n", area);
  printf("Anothe number %.2lf: ",another);

  return 0;
}