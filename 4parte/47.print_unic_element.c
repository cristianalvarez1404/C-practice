#include <stdio.h>
#include <stdbool.h>

void print_unique(int a[], int length);

int main(void)
{
  int a[] = {1,2,3,4,5,6,3,4,1,8,9,7,8};
  print_unique(a,13);

  return 0;
}

void print_unique(int a[], int length)
{
  for(int i = 0; i < length; i++)
  {
    bool is_unique = true;

    for(int j = 0; j < i; j++)
    {
      if(a[i] == a[j])
      {
        is_unique = false;
        break;
      }
    }

    if(is_unique)
    {
      printf("%d ", a[i]);
    }
  }
}