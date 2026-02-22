#include <stdio.h>
#include <stdlib.h>

/*Single linked list*/
struct node1 {
  int data;
  struct node *link;
};

/*Doubly linked list*/
struct node {
  struct node* prev;
  int data;
  struct node* next;
};


int main(){
  //Doubly linked list
  /*
    Each node has an extra pointer that points to the previous node, together with the next pointer and data similar to singly linked list.
  */
  struct node *head = malloc(sizeof(struct node));
  head->prev = NULL;
  head->data = 10;
  head->next = NULL;


  return 0;
}