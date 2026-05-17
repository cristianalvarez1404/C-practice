#include <stdio.h>
#include <stdbool.h>

bool is_disjoint(int a1[], int l1, int a2[], int l2)
{
  for(int i = 0; i < l1; i++)
    for(int j = 0; j < l2; j++)
      if(a1[i] == a2[j]) return false;
  return true;
}

int main(void)
{
  int array1[] = {1,3,5,7,9};
  int array2[] = {2,4,6,8,10};
  int l1 = sizeof(array1) / sizeof(int);
  int l2 = sizeof(array1) / sizeof(int);

  if( is_disjoint(array1,l1,array2,l2))
    printf("Array are disjoint\n");  
  else
    printf("Array are not disjoint\n");

  return 0;
}