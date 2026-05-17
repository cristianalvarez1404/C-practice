#include <stdio.h>

void rotate_left_one(int a1[], int a2[], int len);
void rotate_left(int a1[], int a2[],int len, int n);

int main(void)
{
  int a1[] = {15,12,3,9,8,1,7,6,2,4,10};
  int len = sizeof(a1) / sizeof(int);
  int a2[len];
  rotate_left(a1,a2,len,2);

  for(int i = 0; i < len; i++)
    printf("%d ",a2[i]);

  return 0;
}

void rotate_left(int a1[], int a2[], int len, int n)
{
  for(int i = 0; i < n; i++){
    rotate_left_one(a1,a2,len);

    for(int j = 0; j < len; j++)
      a1[j] = a2[j];
  }
}

void rotate_left_one(int a1[], int a2[], int len)
{
  for(int i = 0; i < len; i++){
    if(i == 0) 
      a2[len - 1] = a1[i];
    else
      a2[i - 1] = a1[i];
  }
}

