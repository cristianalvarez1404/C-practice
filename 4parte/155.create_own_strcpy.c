#include <stdio.h>
#include <string.h>

char *str_cpy1(char *destination, const char *source);
char *str_cpy2(char *destination, const char *source);

int main()
{
  char src[] = "copy this";
  char dest[100];

  char *dest_ptr = str_cpy2(dest, src);

  printf("src: %s\n", src);
  printf("dest: %s\n", dest);
  printf("dest_ptr: %s\n", dest_ptr);

  printf("dest: %p\n", dest);
  printf("dest_ptr: %p\n", dest);

  return 0;
}

char *str_cpy1(char *destination, const char *source)
{
  if(destination == NULL) return NULL;

  int i = 0;
  while(source[i] != '\0')
  {
    destination[i] = source[i];
    i++;
  }
  destination[i] = '\0';

  return destination;
}

char *str_cpy2(char *destination, const char *source)
{
  if(destination == NULL) return NULL;

  char *return_ptr = destination;

  while(*source != '\0')
  {
    *destination = *source;
    destination++;
    source++;
  }

  *destination = '\0';

  return return_ptr;
}