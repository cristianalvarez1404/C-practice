#include <stdio.h>

int main(){
  int x = 2;

  switch(x){
    case 1: 
      printf("x is 1");
      break;
    case 2: 
      printf("x is 2");
      break;
    case 3: 
      printf("x is 3");
      break;
    case 4: 
      printf("x is 4");
      break;
    default:
      printf("x is an another number different 1 to 4");
      break;
  }

  int a = 1, b = 2, c = 3;

  switch(a + b * c){
    case 1: printf("choice 1\n");
      break;
    case 2: printf("choice 2\n");
      break;
    default: printf("default\n");
      break;
  }

  int y = 23;
  switch(y){
    case 3 + 3: printf("choice 1");
      break;
    case 3 + 4 * 5: printf("choice 2");
      break;
    default: printf("default");
      break;
  }

  int z = 2;

  switch(z){
    default: printf("default case");
      break;
    case 1: printf("Number is 1");
      break;
    case 2: printf("Number is 2");
      break;
  }
  
  return 0;
}