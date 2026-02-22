#include <stdio.h>

struct node {
  int data;
  struct node *link;
};

void del_last(struct node *head){
  if(head == NULL)
    printf("List is already empty!");
  else if(head->link == NULL){
    free(head);
    head = NULL;
  }
  else {
    struct node *temp = head;
    while(temp->link->link != NULL){
      temp = temp->link;
    }
    free(temp->link);
    temp->link = NULL;
  }
}

int main(){
  // Deleting the last node by using single pointer
  del_last(head);
  ptr = head;
  while(ptr != NULL){
    printf("%d ", ptr->data);
    ptr = ptr->link;
  }

  return 0;
}