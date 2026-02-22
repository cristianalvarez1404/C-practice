#include <stdio.h>

int f(int x, int *py, int **ppz){
  int y, z;// z = 5 , y = 7, x = 10 = 22
  **ppz += 1;
  z = **ppz;
  *py += 2;
  y = *py;
  x += 3;
  return x + y + z;
}

// int i = 0, j = 1;

// void f(int *p, int *q){
//   p = q;
//   *p = 2;
// }

int main(){
  // int a[][3] = {1, 2, 3, 4, 5, 6};
  // int (*ptr)[3] = a;
  // printf("%d %d", (*ptr)[1], (*ptr)[2]);
  // ++ptr;
  // printf("%d %d", (*ptr)[1], (*ptr)[2]);

  // f(&i, &j);
  // printf("%d %d\n", i, j);

  int c, *b, **a; // double star. It is not a normal pointer. 
  //It is a POINTER TO A POINTER THAT'S WHY **, WE POINT TO ANOTHER POINTER.
  c = 4, b = &c, a = &b;  
  printf("%d", f(c,b,a));

  return 0;
}