#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
} *top = NULL;

void push(int data) {
  struct node* newNode;
  newNode = malloc(sizeof(newNode));

  if(newNode == NULL)
  {
    printf("Stack overflow.");
    exit(1);
  }

  newNode->data = data;
  newNode->link = NULL;

  newNode->link = top;
  top = newNode;
}

void print()
{
  struct node* temp;
  temp = top;
  printf("The stack elements are: ");
  while(temp) {
    printf("%d ", temp->data);
    temp = temp->link;
  }
  printf("\n");
}


int main(){
  //Stacks - Linked list implementation
  // Use linked list when the size of the stack is not known in advance
  int choice, data;

  while(1){
    printf("1. Push\n");
    printf("2. Print\n");
    printf("3. Quit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
      case 1:
        printf("Enter the element to be pushed: ");
        scanf("%d", &data);
        push(data);
        break;
      case 2:
        print();
        break;
      case 3:
        exit(1);
        break;
      default:
        printf("Wrong Choice\n");
        break;
    }
  }

  return 0;
}
