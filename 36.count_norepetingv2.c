#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int array[] = {1,3,5,7,3,7,6,6,4,2,9};
  int len = sizeof(array) / sizeof(int);
  int a_num[len];
  int a_count[len];
  int temp = 0;
  int next = true;
  int pos = 0;

  for(int i = 0; i < len; i++)
  {
    next = true;

    for(int y = 0; y < pos; y++)
    {
      if(array[i] == a_num[y]){
        next = false;
        break;
      } 
    }
    
    if(next)
    {
      temp = 0;

      for(int y = 0; y < len; y++)
      {
        if(array[i] == array[y])
          temp++;
      }

      a_num[pos] = array[i];
      a_count[pos] = temp;
      pos++;
    }
  }

  for(int i = 0; i < pos; i++)
    printf("%d : %d\n", a_num[i], a_count[i]);

  return 0;
}