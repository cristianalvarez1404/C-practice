#include <stdio.h>

int main(){
  char var = 3; // 3 in binary => 0000 0011
  printf("%d\n", var << 1);

  char var1 = 3; 
  printf("%d\n", var1 >> 1);

  char var2 = 7;
  printf("%d\n", var2 ^ 4);

  return 0;
}