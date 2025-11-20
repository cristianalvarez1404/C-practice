#include <stdio.h>

int main(){

  char character = 'C';
  char character2 = 65;

  printf("%c\n",character);
  printf("%c\n",character2);

  // size = 1byte <> range = -128 to +127
  // char can asign numbers 1byte => ASCII,numbers, tiny numbers NOT ONLY ASCII
  // Two's complement => System and standar to work with negative numbers, invert numbers + 1 .
  //Remember signed and unsigned affect the range => 0 - 255(unsigned) => -128 + 127(signed) => both have 1byte
  //MSB => Most significant bit we use to left to right for know most signficant number or the number's signal


  return 0;
}