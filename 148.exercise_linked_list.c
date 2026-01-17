#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

struct node *move_to_front(struct node *head){
  struct node *p, *q;
  if((head == NULL || head->next == NULL))
    return head;

  q = NULL;
  p = head;

  while(p->next != NULL){
    q = p;
    p = p->next;
  }
  
  return head;
}


int main(){


  return 0;
}