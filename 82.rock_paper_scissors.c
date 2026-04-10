#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
  srand(time(NULL));

  int player_throw = 0;
  int ai_throw = 0;
  bool draw = false;

  do
  {
    printf("Select your throw.\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Selection: ");
    scanf("%d", &player_throw);

    ai_throw = (rand() % 3) + 1;

    if(ai_throw == ROCK)
      printf("\nAI throws ROCK.\n");
    else if(ai_throw == PAPER)
      printf("\nAI throws PAPER.\n");
    else if(ai_throw == SCISSORS)
      printf("\nAI throws SCISSORS.\n");

    draw = false;
    
    if(player_throw == ROCK && ai_throw == SCISSORS)
      printf("\nROCK beats SCISSORS. YOU WIN!.\n\n");
    else if(player_throw == ROCK && ai_throw == PAPER)
      printf("\nPAPER beats ROCK. YOU LOSE!.\n\n");
    else if(player_throw == SCISSORS && ai_throw == PAPER)
      printf("\nSCISSOR beats PAPER. YOU WIN!.\n\n");
    else if(player_throw == SCISSORS && ai_throw == ROCK)
      printf("\nROCK beats SCISSORS. YOU LOSE!.\n\n");
    else if(player_throw == PAPER && ai_throw == ROCK)
      printf("\nPAPER beats ROCK. YOU WIN!.\n\n");
    else if(player_throw == PAPER && ai_throw == SCISSORS)
      printf("\nSCISSORS beats PAPER. YOU LOSE!.\n\n");
    else 
    {
      printf("\nDRAW! Play again.\n\n");
      draw = true;
    }

  } while (draw);
  
  return 0;
}