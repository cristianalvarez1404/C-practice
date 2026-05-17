#include <stdio.h>

int main()
{
  int heigth = 0;
  printf("Enter heigth: ");
  scanf("%d", &heigth);
  printf("\n");

  for(int i = 1; i <= heigth; i++)
  {
    int starCount = (i * 2) - 1;
    int spaceCount = heigth - i + 1;

    for(int j = 0; j < spaceCount; j++)
      printf(" ");

    for(int j = 0; j < starCount; j++)
      printf("*");

    printf("\n");
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < heigth; j++)
      printf(" ");

    printf("*\n");
  }

  return 0;
}