#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
};

struct node* reverseLL(struct node* head)
{
  if(head == NULL)
    return head;

  struct node* current = NULL;
  struct node* next = head->link;
  head->link = NULL;

  while(next != NULL)
  {
    current = next;
    next = next->link;
    current->link = head;
    head = current;
  }
  return head;
}

struct node* add_node(struct node* head, int val) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->data = val;
  newNode->link = NULL;

  newNode->link = head;
  head = newNode;
  return head;
}

struct node* createLL(struct node* head, int n)
{
  while(n != 0)
  {
    head = add_node(head, n % 10);
    n = n / 10;
  }
  return head;
}

void print(struct node* head) {
  struct node* temp = head;
  if(head == NULL) {
    printf("No number.");
  }
  else {
    while(temp->link != NULL)
    {
      printf("%d -> ", temp->data);
      temp = temp->link;
    }
    printf("%d", temp->data);
  }
}

int main(){
  //Addition of two numbers using linked list
  int a, b;
  printf("Enter the two numbers: ");
  scanf("%d %d", &a, &b);

  printf("Linked list representation of first number: \n");
  struct node* head1 = NULL;
  head1 = createLL(head1, a);
  print(head1);

  struct node* head2 = NULL;
  printf("\nLinked list representation of second number: \n");
  head2 = createLL(head2, b);
  print(head2);

  head1 = reverseLL(head1);
  head2 = reverseLL(head2);

  printf("\nReversed linked lists: \n");
  print(head1);
  printf("\n");
  print(head2);

  return 0;
}
