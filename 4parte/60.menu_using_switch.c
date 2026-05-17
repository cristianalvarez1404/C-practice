#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
  double balance = 0, amount = 0;
  int choice = 0;

  while(true)
  {
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Print Balance\n");
    printf("4. Print Balance And Quit\n");
    printf("5. Quit\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1:
        printf("Enter Amount: ");
        scanf("%lf", &amount);
        balance += amount;
        break;

      case 2:
        printf("Enter Amount: ");
        scanf("%lf", &amount);
        if(amount <= balance)
          balance -= amount;
        else
          printf("Not enoght founds!\n");
        break;

      case 3:
        printf("%.2f\n",balance);
        break;

      case 4:
        printf("%.2f\n",balance);

      case 5:
        printf("Have a good day!");
        exit(0);

      default:
        printf("Invalid option!\n");
        break;
    }
  }

  return 0;
}