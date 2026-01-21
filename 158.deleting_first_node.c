#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node* prev;
  int data;
  struct node* next;
};

struct node* delFirst(struct node* head)
{
  struct node* temp = head;
  head = head->next;
  free(temp);
  temp = NULL;
  head->prev = NULL;
  return head;
}

int main(){


  return 0;
}