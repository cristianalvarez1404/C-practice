#include <stdio.h>

int main(){

  int x;

  printf("Choose between 1. apples, 2. pears or 3. bananas\n");
  scanf("%d",&x);

  switch(x){
    case 1:
      printf("apples");
      break;
    case 2:
      printf("pears");
      break;
    case 3:
      printf("bananas");
      break;
    default:
      printf("nothing");    
  }
  
  return 0;
}