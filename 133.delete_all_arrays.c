#include <stdio.h>

int main()
{
  int buffer[100] = {2,1,4,5,6,7,7,5,4,4};
  int size = 10;
  int delete = 0;

  for(int i = 0; i < size; i++)
    printf("%d ", buffer[i]);
  printf("\n\n");

  printf("Enter Number To Delete: ");
  scanf("%d", &delete);

  int i = 0;
  while(i < size)
  {
    if(buffer[i] == delete)
    {
      if(i < (size - 1))
        for(int j = i; j < (size - 1); j++)
          buffer[j] = buffer[j + 1];
      
      size--;
    }
    else i++;
  }

  for(int i = 0; i < size; i++)
    printf("%d ", buffer[i]);
  printf("\n\n");

  return 0;
}