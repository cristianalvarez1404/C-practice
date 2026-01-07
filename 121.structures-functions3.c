#include <stdio.h>

struct point {
  int x;
  int y;
};

void print(struct point *ptr){
  printf("%d %d\n", ptr->x, ptr->y);
}

int main(){
  //passing pointers to structures as arguments
  
  //If the size of the structure is very large then passing the copy of the whole structure is not efficient.
  
  //Use the arrow operator(->) to access the STRICTURE MEMEBERS inside the called function.

  struct point p1 = {23, 45};
  struct point p2 = {56, 90};
  print(&p1);
  print(&p2);

  return 0;
}