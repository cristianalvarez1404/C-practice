#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  srand(time(NULL));

  int number = (rand() % 100) + 1;
  int guess = 0;

  do
  {
    printf("Enter a Guess:");
    scanf("%d",&guess);

    if(guess == number) printf("You got it!\n");
    else if(guess < number) printf("Guess higher!\n");
    else printf("Guess lower!\n");

  } while (guess != number);
  
  return 0;
}