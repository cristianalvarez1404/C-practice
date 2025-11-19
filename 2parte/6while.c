#include <stdio.h>

int main(){
  int x;

  while(x != 1){
    printf("Do you wish to quit? Press 1.\n");
    scanf("%d",&x);
  }

  printf("Bye!");
  return 0;
}