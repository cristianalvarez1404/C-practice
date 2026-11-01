#include <stdio.h>
#include <stdint.h>

int main()
{
  int a = 32;
  int b = 0xffaa33; //0x
  int c = 0755; // 0
  int d = 0b010101010; //ob

  int64_t e = 64;
  uint64_t f = 68;

  printf("%d\n", a);
  printf("%x\n", b);
  printf("%o\n", c);
  printf("%b\n", d);
  printf("%ld\n", e);
  printf("%ld\n", f);

  return 0;
}