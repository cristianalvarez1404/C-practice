#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
};

int isEmpty(struct node* top)
{
  if(top == NULL)
    return 1;
  else
    return 0;
}

void push(int data, struct node* top) {
  struct node* newNode;
  newNode = malloc(sizeof(newNode));

  if(newNode == NULL)
  {
    printf("Stack Overflow.");
    exit(1);
  }
  newNode->data = data;
  newNode->link = NULL;

  newNode->link = top;
  top = newNode;
}

void print(struct node* top)
{
  struct node* temp;
  temp = top;
  if(isEmpty(top))
  {
    printf("Stack Underflow.");
    exit(1);
  }
  printf("The stack elements are: ");
  while(temp) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
  printf("\n");
}

int main(){
  struct node* top = NULL;
  struct node* top1 = NULL;
  struct node* top2 = NULL;

  push(1, top);
  print(top);
  return 0;
}