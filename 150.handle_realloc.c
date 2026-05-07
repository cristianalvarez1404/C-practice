#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *array = malloc(sizeof(int) * 3);

  array[0] = 2;
  array[1] = 3;
  array[2] = 8;

  printf("array before: %p\n", array);

  int *temp;

  temp = realloc(array, sizeof(int) * 4);

  if(temp != NULL) array = temp;
  else
  {
    printf("array after: %p\n", array);
  }

  array[3] = 5;

  for(int i = 0; i < 4; i++)
    printf("%d ",array[i]);

  free(array);
  
  return 0;
}