#include <stdio.h>

struct abc {
  int x;
  int y;
};

int main(){
  //pointer to structure variable
  struct abc a = {0, 1};
  struct abc *ptr = &a;

  printf("%d %d", ptr -> x, (*ptr).y); //ptr -> x = (*ptr).x = (*&a).x

  return 0;
}