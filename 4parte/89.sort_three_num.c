#include <stdio.h>

int main()
{
  int n1, n2, n3;

  printf("Enter 3 numbers: \n\n");
  scanf("%d %d %d", &n1, &n2, &n3);

  int lowest, middle, highest;

  if(n1 <= n2 && n1 <= n3)
  {
    lowest = n1;

    if(n2 <= n3)
    {
      middle = n2;
      highest = n3;
    }
    else
    {
      middle = n3;
      highest = n2;
    }
  }
  else if(n2 <= n1 && n2 <= n3)
  {
    lowest = n2;
    if(n1 <= n3)
    {
      middle = n1;
      highest = n3;
    }
    else
    {
      middle = n3;
      highest = n1;
    }
  }
  else
  {
    lowest = n3;
    if(n1 <= n2)
    {
      middle = n1;
      highest = n2;
    }
    else
    {
      middle = n2;
      highest = n1;
    }
  } 

  printf("\n\n");
  
  printf(" asc: %d %d %d\n\n",lowest, middle, highest);
  printf(" desc: %d %d %d\n\n",highest, middle, lowest);
  
  return 0;
}