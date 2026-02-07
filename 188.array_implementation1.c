#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int stack_arr[4];
int top = -1;

void push(int data){
  if(top == MAX - 1){
    printf("Stack overflow");
    return;
  }
  top = top + 1;
  stack_arr[top] = data;
}

int pop(){
  int value;

  if(top == -1) {
    printf("Stack underflow");
    exit(1);
  }

  value = stack_arr[top];
  top = top - 1;
  return value;
}

void print(){
  int i;
  if(top == -1){
    printf("stack underflow\n");
    return;
  }

  for(i = top; i >= 0; i--)
    printf("%d ", stack_arr[i]);

  printf("\n");
}


int main(){
  //Array implementation of stacks
  int data;
  push(1);
  push(2);
  push(3);
  push(4);
  // push(5);
  data = pop();
  data = pop();
  print();
  printf("%d",stack_arr[3]);
  return 0;
}