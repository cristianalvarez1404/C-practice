#include <stdio.h>

int main(void)
{
  int a[] = {7,1,3,9,0,2,4,5,8};
  int len = sizeof(a) / sizeof(int);
  int temp;

  for(int j = 0; j < len - 1; j++)
  {
    for(int i = 0; i < len - 1; i++)
    {
      if(a[i] > a[i + 1]){
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
  }

  for(int i = 0; i < len; i++)
    printf("%d ",a[i]);

  return 0;
}