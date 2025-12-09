#include <stdio.h>

char fun();
int add(int, int);

int areaOfRect(int length, int breadth){
  int area;
  area = length * breadth;
  return area;
}

int main(){
  int l = 10, b = 5;
  int m = 20, n = 30, sum;
  int area = areaOfRect(l, b);
  char c = fun();
  sum = add(m, n);

  printf("%d\n", area);
  printf("character is: %c\n", c);
  printf("sum is %d", sum);

  return 0;
}

char fun(){
  return 'a';
}

int add(int a, int b){
  return (a + b);
}