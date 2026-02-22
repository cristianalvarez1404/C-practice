#include <stdio.h>

struct point {
  int x;
  int y;
};

void print(struct point p){
  printf("%d %d\n", p.x, p.y);
}

int main(){
  //passing structure variable as argument. => WE PASS VALUES NOT POINTERS

  struct point p1 = {23, 45};
  struct point p2 = {56, 90};
  print(p1);
  print(p2);

  return 0;
}