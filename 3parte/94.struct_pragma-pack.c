#include <stdio.h>
#pragma pack(1)

struct abc {
  char a;
  int b;
  char c;
} var;


int main(){
  // Structure packing
  //Because of structure padding(create empty books), size of the structure becomes more than the size of the actual structure. Due to this some memory will get wasted.

  //we can avoid the wastege of memory by simply writing #pragma pack(1) 

  // We can wastage of memory with structure padding  or wastege of CPU cycles with  #prama pack(1)

  printf("%d", sizeof(var));

  return 0;
}