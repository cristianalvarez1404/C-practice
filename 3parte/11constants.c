#include <stdio.h>
#define PI 3.14159
#define add(x,y) x + y
#define greater(x,y) if(x > y) \
                      printf("%d is greater than %d\n", x, y); \
                    else \
                      printf("%d is lesser than %d\n", x, y);

int main(){
  // constant
  /*
    using define => MACRO simple, MACRO funcion, MACRO condicional
    using const => 
  */

  const int var = 67;

  printf("Addition of two numbers: %d\n", add(4, 3));
  greater(5,6);

  printf("Date: %s\n", __DATE__);
  printf("Time: %s\n", __TIME__);

  return 0;
}