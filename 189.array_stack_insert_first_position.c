#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack_arr[MAX];
int first = -1;

void push(int data)
{
  int i;
  first += 1;
  for(i = first; i > 0; i--)
    stack_arr[i] = stack_arr[i - 1];
  stack_arr[0] = data; 
}

void print()
{
  int i;
  if(first == -1)
  {
    printf("Stack underflow\n");
    exit(1);
  }
  for(i = 0; i <= first; i++)
    printf("%d ", stack_arr[i]);
  printf("\n");
}

int main(){
  push(30);
  push(90);
  push(40);
  print();
  return 0;
}