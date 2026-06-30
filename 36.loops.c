#include <stdio.h>

int main(){
  int v[5] = {1,2,3,4,5};

  int counter = 0;

  while(counter < 5) {
    printf("v[%i] = %i\n", counter, v[counter]);
    counter++;
  }
  
  for(int counter = 0; counter < 5; counter++ ){
    printf("v[%i] = %i\n", counter, v[counter]);
  }

  return 0;
}