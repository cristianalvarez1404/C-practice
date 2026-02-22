#include <stdio.h>

int main(){
  //Pointer assigment
  int i = 10;
  int *p, *q;

  p = &i; // supose that i is equal to = 1000 and p take this address
  q = p;  // q is equal to = 1000 the same address that point to i

  printf("%d %d\n", *p , *q); // q is diffent to p but *q is equal to *p

  /*************************************************/
  int a = 1;
  int *ptr1 = &a;
  int *ptr2;

  ptr2 = ptr1;
  *ptr2 = 5;

  printf("%d", *ptr1);



  return 0;
}