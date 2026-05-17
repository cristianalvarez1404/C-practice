#include <stdio.h>

void merge(int a[], int i, int b[], int j, int r[]);

int main(void)
{
  int x[] = {1,3,5,7,9};
  int y[] = {2,4,6,8,10};
  int result[10];

  merge(x, 5, y, 5, result);

  for(int i = 0; i < 10; i++)
    printf("%d ", result[i]);

  printf("\n\n");

  return 0;
}

void merge(int a[], int i, int b[], int j, int r[])
{
  //merge(array1, m, i + 1, array2, n, j, result, k + 1);
  if(i != 0 || j != 0)
  {
    if(i == 0)
    {
      r[0] = b[0];
      merge(a, i, b + 1, j - 1, r + 1);
    }
    else if(j == 0 || a[0] < b[0])
    {
      r[0] = a[0];
      merge(a + 1, i - 1, b, j, r + 1);
    }
    else
    {
      r[0] = b[0];
      merge(a, i, b + 1, j - 1, r + 1);
    }
  }
}