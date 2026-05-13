#include <stdio.h>

int find_index(int array[], int length, int K);

int main()
{
  int array1[] = {1,4,5,7,8,9};
  int length1 = 6;
  int K1 = 8;
  int index1 = find_index(array1, length1, K1);
  printf("index1: %d\n", index1);

  return 0;
}

int find_index(int array[], int length, int K)
{
  for(int i = 0; i < length; i++)
    if(array[i] >= K) return i;

  return length;
}