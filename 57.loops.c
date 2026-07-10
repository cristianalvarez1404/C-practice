#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const int ARRAYSIZE = 4;

int main(int argc, char **argv){
  
  int myvalues[ARRAYSIZE] = {1,2,3,4};

  int i = 0;
  while( i < ARRAYSIZE){
    printf("%d: %d\n", i, myvalues[i]);
    i++;
  }
  
  for(int i = 0; i < ARRAYSIZE; i++){
    printf("%d: %d\n", i, myvalues[i]);
  }

  for(int a=0, b=1,c; b < 100; c=a,a=b,b=b+c){
    printf("%d\n", b);
  }

  int a=0,b=1,c;
  while(b < 100){
    printf("%d\n", b);
    c=a;
    a=b;
    b=b+c;
  }

}