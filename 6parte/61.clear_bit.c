#include <stdio.h>
#include <stdlib.h>

#define BITVALUE(X , N) (((X) >> (N)) & 0X1)

#define READONLY 0x1  // 00000001 
#define HIDDEN 0x2    // 00000010
#define SYSTEM 0x4    // 00000100
#define VOL_LABEL 0x8 // 00001000
#define SUBDIR 0X10   // 00010000
#define ARCHIVE 0X20  // 00100000

void prints_bit_info(uint32_t x)
{
  printf("x = %d\n", x);

  int numbits = sizeof(x) * 8;
  for(int i = 0; i < numbits; i++)
  {
    printf("%d", BITVALUE(x, numbits - 1 - i));
  }
  printf("\n");
  
  if(x & READONLY)
  {
    printf("read only!\n");
  }
  
  if(x & HIDDEN)
  {
    printf("hidden!\n");
  }
  
  if(x & SYSTEM)
  {
    printf("System!\n");
  }
}

int main(void)
{
  uint32_t x = 42; // 101010
  prints_bit_info(x);

  x = x | SYSTEM;   // set
  x |= SYSTEM;
  x = x | HIDDEN; 
  x = x & ~HIDDEN;  // clear
  x &= ~HIDDEN;  // clear
  x = x ^ READONLY; // toggle
  x ^= READONLY; // toggle

  prints_bit_info(x);
  return EXIT_SUCCESS;
}