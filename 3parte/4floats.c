#include <stdio.h>

int main(){
  // float, double, long double

  printf("%d\n",sizeof(float)); // 4 bytes
  printf("%d\n",sizeof(double)); // 8 bytes
  printf("%d\n",sizeof(long double)); // 16 bytes

  // Ways to represent decimal
  // IEEE 754 Single Precision floating point => float

  // fixed and floting point => Representation of fraction numbers
  // floting point is used in modern computers

  float var1 = 3.14;
  double var2 = 3.14;
  long double var3 = 3.14;

  printf("%f\n",var1);
  printf("%lf\n",var1);
  printf("%Lf\n",var1);

  int value = 4 / 9;
  float value1 = 4 / 9;
  float value2 = 4.0f / 9.0f;

  printf("-----------------------------\n");
  printf("%d\n",value);
  printf("%2f\n",value1);
  printf("%2f\n",value2);


  return 0;
}