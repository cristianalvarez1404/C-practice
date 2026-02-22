#include <stdio.h>

int fun();

int var = 20; // => Global variable

int main(){

  //Scope variable - Local vs Global
  //Basic principle of scoping
  
  /*
    { => Block
      { => Block
      }
    }
  */

  int var = 3;
  
  {
    int var = 4;
    printf("%d\n", var);
  }

  printf("%d\n",var);
  fun();
  return 0;
}

int fun(){
  printf("%d", var);
}