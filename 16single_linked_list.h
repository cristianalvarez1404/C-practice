#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Individual node in the chain
typedef struct node {
  int data;
  struct node* next;
} node_t;

//Linked list data structure, which always holds the first node in our chain
typedef struct linked_list {
  node_t* head;
}linked_list_t;

//malloc a new linked list and then return a pointer to that linked list
linked_list_t* create_linked_list_of_five_items();

//Create an empty linked list
linked_list_t* create_linked_list();

//Walk through linked list and print all nodes
void print_linked_list(linked_list_t* list);

//Walk through linked list and delete all nodes
void free_linked_list(linked_list_t* list);

//Create a new node_t and add to the end of the linked list
void append_to_linked_list(linked_list_t* list, int data);

#endif