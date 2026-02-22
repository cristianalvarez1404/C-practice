#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull(){
  if(top == MAX - 1)
    return 1;
  else 
    return 0;
}

int isEmpty(){
  if(top == -1)
    return 1;
  else 
    return 0;
}

void push(int data)
{
  if(isFull()){
    printf("Stack Overflow.");
    exit(1);
  }
  top++;
  stack[top] = data;
}

int pop(){
  int val;
  if(isEmpty())
  {
    printf("Stack underflow.");
    exit(1);
  }
  val = stack[top];
  top--;

  return val;
}

void dec2bin(int n)
{
  //Push all the remainder onto stack
  while(n != 0){
    push(n % 2 );
    n = n / 2;
  }
}

void print()
{
  if(isEmpty()){
    printf("Stack Underflow.");
    exit(1);  
  }
  while(!isEmpty()){
    printf("%d", pop());
  }
}

int main(){
  // Decimal to binary using stacks
  int dec;
  printf("Enter the decimal number: ");
  scanf("%d", &dec);
  dec2bin(dec);
  print();

  return 0;
}