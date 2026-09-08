#include <stdio.h>

//Padding, packing, alignment and arrangment
typedef struct StagesCompleted {
  char level_1_completed : 1;
  char level_2_completed : 1;
  char level_3_completed : 1;
  char level_4_completed : 1;
  char level_5_completed : 1;
  char level_6_completed : 1;
  char level_7_completed : 1;
  char level_8_completed : 1;
} StagesCompleted_t;

int main(){
  // Bit shifting operations
  // << (left shift) and >> (right shift)

  // << left shift operation multiples by 2 for every bit shifted - MULTIPLY/DOUBLE QUICKY

  int x = 1;
  printf("x is: %d\n", x);
  x = x << 1;
  printf("x is: %d\n", x);
  x = x << 1;
  printf("x is: %d\n", x);
  x = x << 1;
  printf("x is: %d\n", x);
  x = x << 1;
  printf("x is: %d\n", x);
  printf("===================================");
  printf("===================================");
  
  // >> (right shift) and >> (right shift)

  // >> right shift operation divides by 2 for every bit shifted - DIVIDES QUICKY

  int y = 64;
  y = y >> 1;
  printf("y is: %d\n", y);
  y = y >> 1;
  printf("y is: %d\n", y);
  y = y >> 1;
  printf("y is: %d\n", y);
  y = y >> 1;
  printf("y is: %d\n", y);
  y = y >> 1;
  printf("y is: %d\n", y);

  // Hex number representation
  // pixel format use 1 byte (8 bits) to store a value of 0 - 255
  // 
  int pixel = 0xFFAACC11;
  unsigned char r = (pixel >> 24);
  unsigned char g = (pixel >> 16);
  unsigned char b = (pixel >> 8);
  unsigned char a = (pixel >> 0);

  printf("r is: %d\n", r);
  printf("g is: %d\n", g);
  printf("b is: %d\n", b);
  printf("a is: %d\n", a);

  /**
    Bit fields -> 
  */

  printf("sizeof(StagesCompleted_t)= %ld\n", sizeof(StagesCompleted_t));



  return 0;
}