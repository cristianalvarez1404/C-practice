#include <stdio.h>

void foo(int x){
  int a = 4; //local variable
  int b = 7;
  int c = 10;

  bar();
}

void bar(){
  int d;
}

int main(){

  for(int i=0; i < 100000; i++){
    foo(i);
  }

  int x = 4; //local variable

  return 0;
}