#include <stdio.h>

int main(void)
{
  int data[] = {2,0,5,6,0,0,7,0,4,7};
  int len = 10;
  int j = 0;
  int n_zeros = 0;

  for(int i = 0; i < len - n_zeros; i++)
  {
    if(data[i] == 0){
      for(int j = i; j < len - n_zeros; j++)
        data[j] = data[j + 1];

      data[len - n_zeros - 1] = 0;
      n_zeros++;
      i--;
    }
  }

  for(int i = 0; i < 10; i++)
    printf("%d ", data[i]);

  return 0;
}