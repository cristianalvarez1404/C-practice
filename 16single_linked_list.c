#include <stdio.h>
#include <stdlib.h>
#include "16single_linked_list.h"

linked_list_t* create_linked_list_of_five_items(){
  linked_list_t* new_list = create_linked_list(); 
  
  for(int i = 0; i < 5; i++){
    append_to_linked_list(new_list,i);
  }

  return new_list;
} 

linked_list_t* create_linked_list(){
  linked_list_t* new_list = (linked_list_t*)malloc(sizeof(linked_list_t));
  new_list->head = NULL;
  return new_list;
}

void print_linked_list(linked_list_t* list){
  //if(list->head == NULL) return NULL;
  
  node_t* temp = list->head;
  
  while(temp != NULL){
    printf("Data: %d\n", temp->data);
    temp = temp->next;
  }
}

void free_linked_list(linked_list_t* list){
  if(list == NULL) return;
  
  node_t* current = list->head;
  if(current == NULL) return;

  node_t* next_node = current->next; 

  while(current != NULL){
    free(current);
    current = next_node;

    if(current != NULL){
      next_node = current->next;
    }
  }

  free(list->head);
  free(list);
}

void append_to_linked_list(linked_list_t* list, int data){

  if(list->head == NULL) {
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;
    
    // set the head of our list, to our newly allocated node
    list->head = new_node;
  } else {
    node_t* temp = list->head;

    //Advance our iterator until we find the node, that has a next of NULL
    while(temp->next != NULL){
      temp = temp->next;
    } 

    temp->next = (node_t*)malloc(sizeof(node_t));
    temp->next->data = data;
    temp->next->next = NULL;
  }
}

