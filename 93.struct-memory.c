#include <stdio.h>

struct abc {
  char a; // 1byte
  int c; // 4byte => The total is 6bytes but this is wrong, depends of the processor
  char b; // 1byte
};

int main(){
  //How memory is allocated to structure members?
  //When an object of some structure type is declared then some contiguos block of memory will be allocated to structure memebers.

  //Processor doesn't read 1 byte at a time from memory.
  //It reads 1 word at a time.

  //if we have a 64 bit processor then it means it can access 8 bytes AT A TIME which means word size is 8 bytes.

  struct abc var;

  printf("%d", sizeof(var));

  return 0;
}