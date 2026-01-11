#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void print_data(struct node *head){
  if(head == NULL)
    printf("Linked list is empty");
  struct node *ptr = NULL;
  ptr = head;

  while(ptr != NULL){
    printf("%d", ptr->data);
    ptr = ptr->link;
  }
}

int main(){
  print_data(head);

  return 0;
}