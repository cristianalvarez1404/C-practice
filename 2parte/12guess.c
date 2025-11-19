#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>

int random(int max);

int main(){
  int balance = 1000;
  int bet = 0;
  int user_guess = 0;
  int random_guess = 0;

  printf("Make your bet: ");
  fflush(stdout);
  scanf("%d",&bet);

  while(1){
    printf("Guess a number between one and six: (Press 0 to exit\n)\n");
    scanf("%d",&user_guess);
    srand(getpid());
    random_guess = random(6);
    fflush(stdout);

    if(user_guess < 0 || user_guess > 6){
      printf("Sorry, you must input a right number between 1 and 6.\n\n");
      continue;
    }

    if(user_guess == 0) break;

    if(user_guess == random_guess){
      balance += bet;
      printf("Congratulation, you guessed the number %d!\n",user_guess);
    }else if(balance > 0) {
      balance -= bet;
      printf("Sorry, the right number was: %d!\n",random_guess);
    }else {
      printf("Sorry, you don't have balance to bed :c\n");
      break;
    }
  }

  printf("Thank you for play the game!\n");
  printf("Your balance is: %d!\n",balance);

  return 0;
}

int random(int max){
  return rand() % max + 1;
}