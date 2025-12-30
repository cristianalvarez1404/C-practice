#include <stdio.h>

struct Ournode {
  char x, y, z;
};

int main(){
  struct Ournode p = {'1', '0', 'a' + 2 };
  struct Ournode *q = &p; //address of the whole structure, NOT THE FIRST ELEMENT
  printf("%c, %c", *( (char*)q + 1 ), *((char*)q+2)); // 0 - c

  return 0;
}