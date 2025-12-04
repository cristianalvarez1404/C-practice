#include <stdio.h>

int fun1(){
  printf("Hello ");
  return 1;
}

int fun2(){
  printf("World ");
  return 1;
}


int main(){
  //Precedence of operators

  int a;
  a = fun1() + fun2();
  printf("%d\n", a);

  return 0;
}