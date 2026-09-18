#include <stdio.h>
#include <math.h>

int main(){

  // float number1 = 0.000001f;
  // float number2 = 1.0f - .999999f;
  
  //More presition
  double number1 = 0.000001;
  double number2 = 1.0f - .999999;

  printf("%.18f\n", number1);
  printf("%.18f\n", number2);

  // if(number1 == number2){
  //   printf("These numbers are equal!");
  // }

  if(fabs(number1 - number2) < 0.00001f){
    printf("These numbers are equal!");
  }

  return 0;
}