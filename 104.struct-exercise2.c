#include <stdio.h>
#pragma pack(1)

struct {
  double a; //8bytes
  union { // 8bytes
    char b[4]; // 4bytes
    double c; // 8bytes
    int d; // 4bytes
  } e;
  char f[4]; //4bytes
} s; // total => 20bytes (without padding)

union {
  double a; // 8bytes
  struct {
    char b[4]; // 4bytes (1byte * 4)
    double c; // 8bytes
    int d; // 4bytes
  } e;
  char f[4]; // 4bytes
} u; // Total => 16bytes

int main(){
  printf("%ld", sizeof(u));

  return 0;
}