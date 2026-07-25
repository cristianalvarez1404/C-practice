#include <stdlib.h>
#include <stdio.h>

struct node {
  int value;
  struct node* next;
};

typedef struct node node_t;

void printlist(node_t *head) {
  node_t *temporary = head;

  while(temporary->next != NULL) {
    printf("%d - ", temporary->value);
    temporary = temporary->next;
  }
  printf("%d", temporary->value);
  
  printf("\n");
}

node_t *create_new_node(int value) {
  node_t *result = malloc(sizeof(node_t));
  result->value = value;
  result->next = NULL;
  return result;
}

node_t *insert_at_head(node_t **head, node_t *node_to_insert){
  node_to_insert->next = *head;
  *head = node_to_insert;
  return node_to_insert;
}

void insert_after_node(node_t *node_to_insert_after, node_t *new_node) {
  new_node->next = node_to_insert_after->next;
  node_to_insert_after->next = new_node;
}

node_t *find_node(node_t *head, int value) {
  node_t *temp = head;

  while(temp->next != NULL){
    if(temp->value == value) return temp;
    temp = temp->next;
  }
  return NULL;
}

int main() {
  node_t *head = NULL;
  node_t *tmp;

  for(int i = 0; i < 25; i++){
    tmp = create_new_node(i);
    insert_at_head(&head, tmp);
  }

  tmp = find_node(head, 13);
  printf("found node with value %d\n", tmp->value);

  insert_after_node(tmp, create_new_node(75));

  printlist(head);

  return 0;
}

// int main() {
//   node_t n1, n2, n3;
//   node_t *head;

//   n1.value = 45;
//   n2.value = 8;
//   n3.value = 32;

//   //link them up
//   head = &n1;
//   n3.next = NULL;
//   n2.next = &n3;
//   n1.next = &n2; // so we kwnow when to stop.

//   node_t n4;
//   n4.value = 13;
//   n4.next = &n3;
//   n2.next = &n4;

//   head = head->next;

//   printlist(head);

//   return 0;
// }