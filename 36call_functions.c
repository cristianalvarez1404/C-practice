#include <stdio.h>

int fun(int, int);
int fun2(int *,int *);

/*
  Call by value => parameters will be store in different locations. Only pass the value, not the address
*/

/*
  Call by reference => Here both actual and formal parameters refers to same memory location. Insteand of passing the value, we pass addresses
*/

int main(){
  int x = 10, y = 20;
  fun(x,y);
  fun2(&x, &y);
  printf("x = %d, y = %d", x, y);

  return 0;
}

int fun(int x, int y){ //This variables are local to this function
    x = 20;
    y = 10;
    return x + y;
}

int fun2(int *ptr1, int *ptr2){ // Pointers are variables where we can store addresess
  *ptr1 = 20; // derefence operator. Notice that the first *ptr1 contains the address, in the second(actual variable) we access to the value.
  *ptr2 = 10;

  return 1;
}




