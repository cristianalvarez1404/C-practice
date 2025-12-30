#include <stdio.h>

struct abcde {
  int a; // => address: 6295624
  char b; // => address: 6295628
};

union abc {
  int a; // => 6295616
  char b; // => 6295616
} var;

union abcd {
  int a;
  char b;
  double c;
  float d;
};

union ab {
  int a;
  char b;
};

int main(){
  //UNIONS => Union is a user defined data type but unlike structures, union members share same memory location.

  //In union, members will share same memory location. If we make changes in one memeber then it will be reflected to other member as well.

  // Size of the union is taken according to the size of the largest member of the union.

  // We can access members of union through pointers by using the arrow  (->) operator.

  var.a = 65;
  printf("a = %d\n", var.a);
  printf("b = %c\n", var.b);

  printf("%ld\n", sizeof(union abcd));

  union abc var;
  var.a = 90;
  union abc *p = &var;
  printf("%d %c", p -> a, p -> b);

  return 0;
}