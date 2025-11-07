#include <stdio.h>

int main(){
  // int x;

  // x = 5;

  // if(x == 5){
  //   printf("It is five\n");
  // }

  int velocity, safespeed;

  safespeed = 100;

  printf("How fast are you driving in km/h?\n");
  scanf("%d", &velocity);

  if(velocity < safespeed)
    printf("You are driving safely\n");
  else if(velocity > safespeed)
    printf("You are driving too fast!\n");
  else
    printf("Ok\n");
  return 0;
  
}