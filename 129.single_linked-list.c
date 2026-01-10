#include <stdio.h>
#include <stdlib.h>
// #pragma pack(1)

struct node {
  int data;
  struct node *link;
};

/*1 method => Not recomended*/

/*
int main(){
  //Creating a single linked list
  struct node *head = (struct node *)malloc(sizeof(struct node));
  head->data = 45;
  head->link = NULL;

  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = 98;
  current->link = NULL;
  head->link = current;

  struct node *current2 = (struct node *)malloc(sizeof(struct node));
  current2->data = 3;
  current2->link = NULL;
  current->link = current2;


  printf("%d",sizeof(struct node));

  return 0;
}

*/

int main(){
  //Creating a single linked list
  struct node *head = (struct node *)malloc(sizeof(struct node));
  head->data = 45;
  head->link = NULL;

  struct node *current = (struct node *)malloc(sizeof(struct node));
  current->data = 98;
  current->link = NULL;
  head->link = current;

  // struct node *current2 = (struct node *)malloc(sizeof(struct node));
  // current2->data = 3;
  // current2->link = NULL;
  // current->link = current2;

  //We reuse the pointer current, because we can reach any node of the list with the help of the HEAD POINTER
  current = malloc(sizeof(struct node));
  current->data = 3;
  current->link = NULL;

  /*
    head => 1000
    head->link = 2000
    head->link->link = NULL (Here we can updated with the pointer)
  */
  head->link->link = current;

  printf("%d",sizeof(struct node));

  return 0;
}



