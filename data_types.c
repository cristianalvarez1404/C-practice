#include <stdio.h>
#include <limits.h>

int main(){

  int var1 = 3;
  int var2 = 4;
  unsigned int var3 = 4; // only positive numbers
  signed int var4 = -5; // positive and negativa numbers
  int var5 = INT_MAX;
  int var6 = INT_MIN;
  unsigned int var7 = UINT_MAX;
  long long int var8 = 0;

  printf("Practicing C\n");
  // printf("%d\n", sizeof(int));
  // printf("%d\n", sizeof(short));
  // printf("%d\n", sizeof(long int));
  // printf("%d",var3);
  // printf("%d\n",var5);
  // printf("%d\n",var6);
  // printf("%u\n",var7);
  printf("%ld\n",sizeof(long long int));

  return 0;
}