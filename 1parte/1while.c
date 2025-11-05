#include <stdio.h>

/*
  print Fahrenheit-Celsius table for fahr = 0, 20,...,300
*/


// int main(){
//   int fahr, celsius;
//   int lower, upper, step;

//   lower = 0; /* lower limit */
//   upper = 300; /* upper limit */
//   step = 20; /* step size */
  
//   fahr = lower;

//   while (fahr <= upper)
//   {
//     celsius = 5 * (fahr - 32) / 9 ;
//     printf("%3d\t%6d\n", fahr, celsius);
//     fahr = fahr + step;
//   }

//   return 0;
//}



int main(){
  printf ("Fahrenheit-Celsius table for fahr = 0, 20,...,300\n");

  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* lower limit */
  upper = 300; /* upper limit */
  step = 20; /* step size */
  
  fahr = lower;

  while (fahr <= upper)
  {
    celsius = (5.0 / 9.0) * (fahr - 32.0) ;
    printf("%6.0f\t%8.1f\n", fahr, celsius);
    fahr = fahr + step;
  }

  return 0;
}