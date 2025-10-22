#include <stdio.h>

/*
int main(){
  int fahr;

  for(fahr = 0; fahr <= 300; fahr + 20)
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));

  return 0;
}
*/


//#define LOWER 0 /* lower limit of table */
//#define UPPER 300 /* upper limit */
//#define STEP 20 /* step size */

const int LOWER = 0; /* lower limit of table */
const int UPPER = 300; /* upper limit */
const int STEP = 20; /* step size */

int main(){
  int fahr;

  for(fahr = UPPER; fahr >= LOWER ; fahr = fahr - STEP){
    printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
  }

  return 0;
}