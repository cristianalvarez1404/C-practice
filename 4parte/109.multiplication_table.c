#include <stdio.h>

int main(void)
{
  int n;

  do{
    printf("Enter Dimension: ");
    scanf("%d", &n);  
    if(n <= 0) printf("Dimension must be > 0\n");
  }while(n <= 0);

  printf("%5s","x");
  for(int i = 1; i <= n; i++)
    printf("%5d", i);
  printf("\n");

  for(int i = 1; i <= n; i++)
  {
    printf("%5d", i);
    for(int j = 1; j <= n; j++){
      printf("%5d", i * j);
    }
    printf("\n");
  }

  return 0;
}