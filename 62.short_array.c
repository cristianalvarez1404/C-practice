#include <stdio.h>
#include <stdlib.h>

#define ARRLENGTH 10

int compare(const void *pa, const void *pb)
{
  int a = *((int *)pa);
  int b = *((int *)pb);
  return b - a;
}

int main()
{
  int values[ARRLENGTH];
  for(int i = 0; i < ARRLENGTH; i++)
  {
    values[i] = rand() % 2000;
  }
  qsort(values, ARRLENGTH, sizeof(int), compare);
  
  //sort first 5 elements
  qsort(values, 5, sizeof(int), compare);
  
  //sort first 5 elements from 2 index
  qsort(values + 2, 5, sizeof(int), compare);
  
  for(int i = 0; i < ARRLENGTH; i++)
  {
    printf("%d:\t%d\n", i, values[i]);
  }
}