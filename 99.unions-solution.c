#include <stdio.h>

struct {
  short s[5]; // 10 bytes = 5 * 2bytes
  union {
    float y;
    long z; // 8 bytes
  } u;
} t;

int main(){


  return 0;
}