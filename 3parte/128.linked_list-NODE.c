#include <stdio.h>
#include <stdlib.h>

struct abc {
  int a;
  char b;
  struct abc *self;
};

//Remember that a node is composed in two parts => data-link = node
struct node {
  int data;
  struct node *link;
};

int main(){
  //Self Referential Structure is a structure which contains a pointer to a structure of the same type.
  // We will use self referential structure for creating a node of the single linked list.

  struct node *head = NULL;
  head = (struct node *)malloc(sizeof(struct node));

  head->data = 45;
  head->link = NULL;

  printf("%d", head->data);


  return 0;
}