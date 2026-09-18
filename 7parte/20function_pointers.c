#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int a, int b){
  return a + b;
}

int multiply(int a, int b){
  return a * b;
}

int main(){
  srand(time(NULL));
  //function signature => consists of the function return type and it's arguments
  
  //FUNCTION POINTER
  //int (*pfn)(int, int) = &add;   
  int (*pfn)(int, int) = NULL;
  int random_number = rand() % 2 + 1;

  if(random_number == 1){
    pfn = add;
    printf("2+7 = %d\n", pfn(2,7));
  }else {
    pfn = multiply;
    printf("2*7 = %d\n", pfn(2,7));
  }

  return 0;
}