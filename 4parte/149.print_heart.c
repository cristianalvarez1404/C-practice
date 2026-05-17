#include <stdio.h>

int main()
{
  int size = 0;

  printf("Enter Size: ");
  scanf("%d",&size);
  printf("\n");

  for(int i = size / 2; i <= size; i += 2)
  {
    for(int j = 1; j <  size - i; j += 2) printf(" ");

    for(int j = 1; j <= i; j++) printf("*");

    for(int j = 1; j <= size - i; j++) printf(" ");

    for(int j = 1; j <= i; j++) printf("*");
  
    printf("\n");
  }

  for(int i = size; i >= 1; i--)
  {
    for(int j = i; j < size; j++) printf(" ");

    for(int j = 0; j <= ((i * 2) - 1); j++) printf("*");

    printf("\n");
  }

  return 0;
}