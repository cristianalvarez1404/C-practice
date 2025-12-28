#include <stdio.h>

struct abc {
  int x;
  int y;
  int z;
};


int main(){
  //Designated initialization allows structure members to be initialized in any order.
  struct abc a = {.y = 20, .x = 10, .z = 30};
  printf("%d %d %d", a.x, a.y, a.z);

  return 0;
}