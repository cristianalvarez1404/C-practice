#include <stdio.h>

int min_distance(int array[], int length, int a, int b );

int main()
{
  int array[] = {0,1,2,3,5,4,8,5,6,8,3,2};
  int length = 12;
  int a = 4;
  int b = 5;

  int min = min_distance(array, length, a, b);
  printf("min distance between %d & %d: %d\n", a, b, min);

  return 0;
}

int min_distance(int array[], int length, int a, int b)
{
  int min = -1;
  int previous = -1;

  for(int i = 0; i < length; i++)
  {
    if(array[i] == a || array[i] == b)
    {
      if(previous != -1 && array[i] != array[previous])
      {
        if(min == -1 || ((i - previous) < min))
          min = i - previous;
      }

      previous = i;
    }
  }

  return min;
}