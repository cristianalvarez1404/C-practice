#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
};

void push(int data, struct node** top1) {
  struct node* newNode;
  newNode = malloc(sizeof(newNode));

  if(newNode == NULL)
  {
    printf("Stack Overflow.");
    exit(1);
  }
  newNode->data = data;
  newNode->link = NULL;

  newNode->link = *top1;
  *top1 = newNode;
}

int pop(struct node** top){
  struct node* temp;
  int val;
  temp = *top;
  val = temp->data;
  *top = (*top)->link;
  free(temp);
  temp = NULL;
  return val;
}

void print(struct node** top)
{
  struct node* temp;
  temp = *top;
  printf("The stack elements are: ");
  while(temp) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
  printf("\n");
}

int main(){
  int data;
  struct node* top = NULL;
  struct node* top1 = NULL;
  struct node* top2 = NULL;
  push(1, &top);
  push(2, &top);
  push(3, &top);

  data = pop(&top);
  push(data, &top1);
  data = pop(&top);
  push(data, &top1);
  data = pop(&top);
  push(data, &top1);
  print(&top);
  print(&top1);

  data = pop(&top1);
  push(data, &top2);
  data = pop(&top1);
  push(data, &top2);
  data = pop(&top1);
  push(data, &top2);
  print(&top1);
  print(&top2);

  data = pop(&top2);
  push(data, &top);
  data = pop(&top2);
  push(data, &top);
  data = pop(&top2);
  push(data, &top);
  print(&top2);
  print(&top);
  return 0;
}