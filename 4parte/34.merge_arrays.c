#include <stdio.h>

int main()
{
  int a1[] = {1,2,3,4,10,11};
  int a2[] = {5,6,7,8};

  int len1 = sizeof(a1) / sizeof(int);
  int len2 = sizeof(a2) / sizeof(int);
  int len3 = len1 + len2;
  int a3[len3];

  for(int i = 0; i < len1; i++){
    a3[i] = a1[i];
  }

  for(int i = 0; i < len2; i++){
    a3[i + len1] = a2[i];
  }

  for(int i = 0; i < len3; i++)
    printf("%d ", a3[i]);

  return 0;
}