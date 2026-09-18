#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node* next;
} node_t;

int main(){

  node_t one;
  node_t two;
  node_t three;

  one.data = 1;
  one.next = &two;
  
  two.data = 2;
  two.next = &three;

  three.data = 3;
  three.next = NULL;

  node_t* iter = &one;
  while(iter != NULL){
    printf("data: %d\n", iter->data);
    iter = iter->next;
  }

  return 0;
}