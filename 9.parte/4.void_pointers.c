#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

void *my_memset(void *data, uint8_t c, size_t n)
{
  uint8_t *data_as_bytes = (uint8_t*)data;
  for(size_t i = 0; i < n; i++)
    data_as_bytes[i] = c;
  //return data;
}

void *my_map(void *xs, size_t size, void (*f)(void*))
{
  uint8_t *xs_as_bytes = (uint8_t*)xs;
  for(size_t i = 0; i < size; i++)
    f(&xs_as_bytes[i * size]);
}

void square(void *x)
{
  int *p = x;
  *p = *p * *p;
}

int main(void)
{
  //int *a;
  int a = 3;
  void *p = &a;
  printf("%p\n", p);
  printf("%d\n", *(int*)p);
  
  /**
   * 
   */
  int xs[5] = {1, 2, 3, 4, 5};
  my_map(xs, sizeof(int), square);
  for(int i = 0; i < 5; i++)
    printf("%d ", xs[i]);
    
  printf("\n");
  
  my_memset(xs, 0, sizeof xs);
  for(int i = 0; i < 5; i++)
    printf("%d ", xs[i]);
    
  printf("\n");

  return 0;
}