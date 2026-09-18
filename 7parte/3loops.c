#include <stdio.h>

int main(){
  int array[5];

  array[0] = 23;
  array[1] = 0;
  array[2] = -7;
  array[3] = 45;
  array[3] = 76;

  for(int i = 0; i < 5; i++){
    printf("array[%d] = %d\n", i, array[i]);
  }

  int countdown = 10;

  while(countdown > 0){
    printf("%d\n", countdown);
    countdown--;
  }

}