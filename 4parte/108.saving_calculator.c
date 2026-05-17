#include <stdio.h>

int main(void)
{
  double balance = 0;
  double rate_of_return = 0;
  double annual_contribution = 0;
  int total_years = 0;

  printf("********** Saving Calculator **********\n\n");
  
  do {
    printf("Initial Deposit: ");
    scanf("%lf", &balance);
    if(balance < 0)
      printf("Initial Deposit Must Be >= 0.00\n");
  } while(balance < 0);
  
  do {
    printf("Annual Contribution: ");
    scanf("%lf", &annual_contribution);
    if(annual_contribution < 0)
      printf("Annual contribution Must Be >= 0.00\n");
  } while(annual_contribution < 0);
  
  do {
    printf("Rate of Return: ");
    scanf("%lf", &rate_of_return);
    if(rate_of_return < 0)
      printf("Rate of Return Must Be >= 0.00\n");
  } while(rate_of_return < 0);
  
  do {
    printf("Years to Grow: ");
    scanf("%d", &total_years);
    if(total_years <= 0)
      printf("Years to Grow Must Be > 0\n");
  } while(total_years <= 0);

  printf("\n%10s%18s%16s%16s\n",
          "Year", "Start Balance", "Interest", "End Balance");
  for(int i = 0; i < 60; i++) printf("*");
  printf("\n");

  for(int year = 1; year <= total_years; year++){
    printf("%10d%18.2f", year, balance);
    double interest = balance * (rate_of_return / 100);
    balance += interest + annual_contribution;
    printf("%16.2f%16.2f\n", interest, balance);
  }
  printf("\n");

  return 0;
}