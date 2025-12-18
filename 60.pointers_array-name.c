#include <stdio.h>

int main(){
  //Array name as a pointer
  int a[5]; 
  // a name represent the direction of first element as &a[0]. But you have to be carefull with this, because you can't assing it a new address to array names.

  *a = 10;
  printf("%d\n", a[0]);

  *(a + 1 ) = 20;
  printf("%d\n", a[1]);

  //old program
  int c[] = {11, 22, 36, 5, 2};
  int sum = 0, *p;

  for(p = &c[0]; p <= &c[4]; p++){
    sum += *p;
  }

  printf("Sum is %d\n", sum );

  // new version
  int b[] = {11, 22, 36, 5, 2};
  int sum2 = 0, *pt;

  for(pt = b; pt <= b + 4; pt++){
    sum2 += *pt;
  }

  printf("Sum is %d", sum2 );

  return 0;
}