#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_random_function(int max);

int main(){
  int random;
  
  printf("El ID del proceso es: %d\n", getpid());
  
  /**************************/
  srand(getpid());
  //srand(time(NULL));
  random = our_random_function(5);
  printf("%d\n", random);
  printf("%d\n",RAND_MAX);
  return 0;
}

int our_random_function(int max){
  return rand() % max + 1;
};