#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* link;
};

void add_at_pos(struct node* head, int data, int pos){
  struct node *ptr = head;
  struct node *ptr2 = malloc(sizeof(struct node));
  ptr2->data = data;
  ptr2->link = NULL;

  pos--;
  while(pos != 1){
    ptr = ptr->link;
    pos--;
  }
  ptr2->link = ptr->link;
  ptr->link = ptr2;
}

int main(){
  //Insertion at a certain position

  return 0;
}