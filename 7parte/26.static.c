#include <stdio.h>

// static means the duration of the variable is 'forever'
// The scope of that variable is where the variable is declared.

static int global = 100; // global variable for the current file

int function(){
  static int i = 0;
  printf("%d\n", i);

  i++;
  return 0;
}

int main(){

  for(int i = 0; i < 10; i++){
    function();
  }

  return 0;
}