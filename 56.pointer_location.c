#include <stdio.h>

// void fun(const int *p){
//   //*p = 0; // we can not change the value, because the variable i is define with const
// }

// int main(){
//   const int i = 10;
//   fun(&i);

//   return 0;
// }

int main(){
  int i = 10;
  int *p = &i;
  printf("The address of variable i is: %p", p);

  return 0;
}