#include <stdio.h>

int second_lowest(int a[], int length);

int main()
{
  int a[] = {9,8,7,6,5,0,1,2,3,4};
  int len = sizeof(a) / sizeof(int);
  int result = second_lowest(a,len);

  printf("Second lowest => %d\n", result);

  return 0;
}

int second_lowest(int a[], int length)
{
  int min1;  
  int min2;
  
  if(a[0] < a[1]){
    min1 = a[0];
    min2 = a[1];
  }
  else {
    min1 = a[1];
    min2 = a[0];
  }

  for(int i = 2; i < length; i++)
  {
    if(a[i] < min1){
      min2 = min1;
      min1 = a[i];
    }
    else if(a[i] < min2 && a[i] > min1)
    {
      min2 = a[i];
    }
  }

  return min2;
}