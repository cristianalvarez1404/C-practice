#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//Create a random number between 1 - 6
int myRandom(int max);

int main(){

  int balance = 1000;
  int bet = 0;
  int guess = 0;
  int dice = 0;

  srand(getpid());

  while(1){
    printf("Make your bet: \n");
    fflush(stdout);
    scanf("%d", &bet);

    printf("Make your guess (1-6, and 0 means quit):\n");
    scanf("%d", &guess);

    if(guess == 0) return 0;

    printf("Throwing the dice...\n");
    sleep(2);
    dice = myRandom(6);
    printf("Dice results: %d\n", dice);

    if(guess != dice){
      balance -= bet;
      printf("Sorry, you lost\n");
    }
    else {
      bet *= 3;
      balance += bet;
      printf("You won - congratulations!\n");
    }

    if(balance == 0) {
      printf("GAME OVER\n");
      return 0;
    }

    printf("Balance : $%d\n",balance);
  }

  return 0;
}

int myRandom(int max){
  return rand() % max + 1;
}

