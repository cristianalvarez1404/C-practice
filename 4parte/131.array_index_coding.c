#include <stdio.h>

int main()
{
  int a[] = {10,20,30,40,50};

  printf("a[2] = %d\n", a[2]);

  printf("1[a] = %d\n", 1[a]);

  // for(int i = 0; i < 5; i++)
  //   i[a] = i + 4;
  
  // for(int i = 0; i < 5; i++)
  //   printf("%d[a] = %d\n", i, i[a]);

  *(a + 2) = 200;
  printf("a[2] = %d\n", a[2]);

  printf("a[3] = %d\n", 3[a]);
  printf("a[3] = %d\n", a[3]);


  return 0;
}