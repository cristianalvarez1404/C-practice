#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char **argv)
{
  char c = 0xA8;
  signed char c = 0xA8;
  unsigned char c = 0xA8;
  uint8_t c = 0xA8;

  printf("c = %d (%X)\n", c, c);
  printf("c = %d (%X)\n", c >> 4, c >> 4);

  return EXIT_SUCCESS;
}