#include <stdio.h>

void odd();
void even();
int n = 1;

int main(){
  //Direct recursion
  //Indirect recursion
  odd();
  //tail recursion => The recursive call is the last thing done by the function.
  //non-tail recursion
  return 0;
}

void odd(){
  if(n <= 10){
    printf("%d ", n + 1);
    n++;
    even();
  }
  return;
}

void even(){
  if(n <= 10){
    printf("%d ", n - 1);
    n++;
    odd();
  }

  return;
}