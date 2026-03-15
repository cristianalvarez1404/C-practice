#include <stdio.h>
#include <stdbool.h>

void buble_sort(int a[], int length);

int main(void)
{
  int a[] = {7,1,3,9,0,2,4,5,8};
  int len = sizeof(a) / sizeof(int);

  buble_sort(a,len);

  for(int i = 0; i < len; i++)
    printf("%d ",a[i]);

  return 0;
}

void buble_sort(int a[], int length)
{
  bool swapped = false;
  int i = 0;

  do{
    swapped = false;
    for(int j = 0; j < (length - 1 - i); j++)
    {
      if(a[j] < a[j + 1])
      {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        swapped = true;
      }
    }
    i++;
  }while(swapped);
}