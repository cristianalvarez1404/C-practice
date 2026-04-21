#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_random(int array[], int length, int max);

int main(void)
{
  srand(time(NULL));

  int a[100];
  fill_random(a, 100, 200);

  for(int i = 0; i < 100; i++)
    printf("a[%d]=%d\n",i, a[i]);

  return 0;
}

void fill_random(int array[], int length, int max)
{
  for(int i = 0; i < length; i++)
    array[i] = (rand() % max) + 1;
}