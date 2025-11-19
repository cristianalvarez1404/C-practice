#include <stdio.h>

int area_triangle(int base, int height);

int main(){

  int b,h,a;

  printf("Base: ");
  fflush(stdout);
  scanf("%d", &b);

  printf("Height: ");
  fflush(stdout);
  scanf("%d", &h);

  a = area_triangle(b, h);
  printf("The area is %d\n", a);

  return 0;
}

int area_triangle(int base, int heigth){
  return base * heigth / 2;
}