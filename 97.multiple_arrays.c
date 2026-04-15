#include <stdio.h>
#include <stdlib.h>

int *create_dynamic(int length);
void return_two(int *a, int *b);
void allocate_two(int **a1, int **a2, int length);

int main(void)
{
  int *array = create_dynamic(10);

  for(int i = 0; i < 10; i++)
    printf("array[%d] = %d\n\n", i, array[i]);

  int x = 4, y = 5;

  return_two(&x, &y);

  printf("x : %d\n, y : %d", x, y);
  printf("\n------------------------------------\n");
  printf("\n------------------------------------\n");

  int *array1, *array2;

  allocate_two(&array1, &array2, 10);

  for(int i = 0; i < 10; i++)
  {
    printf("array1[%d] = %d\n\n", i, array1[i]);
    printf("array2[%d] = %d\n\n", i, array2[i]);
  }

  return 0;
}

void allocate_two(int **a1, int **a2, int length)
{
  *a1 = malloc(sizeof(int) * length);   
  *a2 = malloc(sizeof(int) * length);
  
  for(int i = 0; i < length; i++)
  {
    (*a1)[i] = i ;
    (*a2)[i] = length - i ;
  }
}

void return_two(int *a, int *b)
{
  *a = 10;
  *b = 20;
}

int *create_dynamic(int length)
{
  int *a = malloc(sizeof(int) * length);
  for(int i = 0; i < length; i++) a[i] = i;
  return a;
}
