#include <stdlib.h>
#include <stdio.h>
#include <linkedlist.h>

void printlist(node *head) {
  node *temporary = head;

  while(temporary != NULL){
    printf("%d - ", temporary->value);
    temporary = temporary->next;
  }
  printf("\n");
}

node *create_new_node(int value) {
  node *result = malloc(sizeof(node));
  result->value = value;
  result->next = NULL;
  return result;
}

node *insert_at_head(node **head, node *node_to_insert) {
  node_to_insert->next = *head;
  *head = node_to_insert;
  return node_to_insert;
}

void insert_after_node(node *node_to_insert_after, node* newnode) {
  node_to_insert_after->next = newnode;
  newnode->next = node_to_insert_after->next;
}

node *find_node(node *head, int value) {
  node *tmp = head;
  while(tmp != NULL) {
    if(tmp->value == value) return tmp;
    tmp = tmp->next;
  }
  return NULL;
}

//Remove and return the first occurence of value
void remove_value(node **head, int value) {
  node *tmp = *head;

  //check the head
  if(*head != NULL && (*head)->value == value){
    tmp = *head;
    *head = (*head)->next;
    free(tmp);
    return;
  }

  //search the rest of the list
  while(tmp != NULL) {
    if(tmp->next && tmp->next->value == value) {
      node *result = tmp->next;
      tmp->next = tmp->next->next;
      free(result);
    }
    tmp = tmp->next;
  }
  return;
}





