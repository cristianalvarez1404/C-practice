#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{ 
  srand(time(NULL));

  char question[1024];
  char *answers[] =
  {
    "Answer 1",
    "Answer 2",
    "Answer 3",
    "Answer 4",
    "Answer 5",
    "Answer 6",
    "Answer 7",
    "Answer 8",
    "Answer 9",
    "Answer 10",
    "Answer 11",
    "Answer 12",
    "Answer 13",
    "Answer 14",
    "Answer 15",
    "Answer 16",
    "Answer 17",
    "Answer 18",
    "Answer 19",
    "Answer 20",
  };

  int rotation = rand() % 20;

  do
  {
    printf("***** Ask Magic 8-Ball *****\n\n");
    printf("[Enter quit to exit.]\n\n");
    printf("Question: ");
  
    fgets(question, 1024, stdin);

    if(strcmp(question, "quit\n") == 0)
      break;
    
    int length = strlen(question);
    int total = 0;
    for(int i = 0; i < length; i++)
      total += question[i];

    int answer = (total + rotation) % 20;

    printf("\nMagic 8-Ball Says: %s\n\n\n", answers[answer]);

  }while(true);

  return 0;
}