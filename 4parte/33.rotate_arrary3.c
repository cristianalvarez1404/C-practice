#include <stdio.h>

void rotate_to_right(int a1[], int len);
void rotate_n_to_right(int a1[], int len, int n);

int main(void){
  int a1[] = {3,4,5,6,2,10,11};
  int len = sizeof(a1) / sizeof(int);
  rotate_n_to_right(a1,len,3);

  for(int i = 0; i < len; i++)
    printf("%d ",a1[i]);
}

void rotate_n_to_right(int a1[], int len, int n)
{
  n = n % len;
  while(n--)
    rotate_to_right(a1,len);
}

void rotate_to_right(int a1[], int len)
{
  int temp = a1[len - 1];

  for(int i = len - 1; i > 0; i--)
    a1[i] = a1[i - 1];

  a1[0] = temp;
}