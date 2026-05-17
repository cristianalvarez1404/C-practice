#include <stdio.h>

void merge(int a[], int m, int b[], int n, int r[]);

int main(void){
  int a1[] = {1,3,5,7,9};
  int a2[] = {2,4,5,6,8};
  int r[10];

  merge(a1, 5, a2, 5, r);

  for(int i = 0; i < 10; i++)
    printf("r[%d] = %d\n", i, r[i]);
  
  return 0;
}

void merge(int a[], int m, int b[], int n, int r[])
{
  int i = 0, j = 0, k = 0;

  while(i < m && j < n)
  { 
    if(a[i] < b[j])
    {
      r[k] = a[i];
      k++;
      i++;
    }
    else
    {
      r[k] = b[j];
      k++;
      j++;
    }
  }

  while(i < m)
  {
    r[k] = a[i];
    k++;
    i++;
  }

  while(j < m)
  {
    r[k] = b[i];
    k++;
    i++;
  }

}