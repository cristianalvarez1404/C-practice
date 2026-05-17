#include <stdio.h>

void rotate_array(int a1[],int a2[], int len )
{
  int i = 0;
  do{
    a2[i] = a1[len];
    i++;
  }while(len-- >= 0);
}

int main(void)
{
  int a1[] = {1,2,3,4,5,6,7,8,9,10};
  int len = (sizeof(a1) / sizeof(int)) - 1;
  int a2[len];
  rotate_array(a1,a2,len);
  
  for(int i = 0; i < sizeof(a1) / sizeof(int); i++)
    printf("%d ",a2[i]);
}