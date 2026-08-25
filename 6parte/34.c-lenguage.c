#include <stdio.h>

/** 
 * Introduction
 */ 
int add3(int a, int b, int c)
{
  int result = a + b + c;
  return result;
}

int main() {
  int mynumber = 0;
  int other;
  float areanumber = 4.5;
  int result;

  printf("Hello world %i %i %i %f\n", mynumber, other, result, areanumber);
  printf("add3 = %i\n", add3(3,67,42));
}

/**
 * Types variables
 */

// numerical, arrays, structs, pointers

/* 
  numerical => int, float => They can be unsigned or signed

  integer => char(1 byte - biggest number is 255 - represent characters), short(2 bytes - biggest number is 65535), int(4 bytes - biggest number is > 4 billion), long(4 bytes), long long(8 bytes)

  float => float, double (double presicion as a float), long double => This is the reason why wouldn't want to use floats or doubles to represent money in bank accounts

  Arrays => Collect diffent int or any type

  Structs => buch of data that you want to keep together

  Pointers => variable store memory addresses or locations in memory => int *x;

*/ 

struct person {
  char name[50];
  int age;
  int height_in_inches;
};

int main(){
  char c = 'A';
  int x[50] = {0};

  x[0] = 5;
  x[3] = 3;
  x[5] = 'A';

  printf("%c\n", c);
  printf("%i, %i\n", x[0], x[3]);

  struct person me;
  struct person you;

  me.age = 49;
  you.height_in_inches = 4;

  printf("%i, %i\n", me.age, you.height_in_inches);
}

int main()
{
  int y = 7;
  int *p = &y;

  *p = 14;

  printf("%p, %i\n", p, *p);
}




