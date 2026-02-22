#include <stdio.h>
#include <stdlib.h>

struct item {
  int data;
  struct item * next;
};

int f(struct item *p){
  return (
    (p == NULL) ||
    (p -> next == NULL) ||
    (( p -> data <= p->next->data) && f(p -> next))
  );
}


int main(){


  return 0;
}