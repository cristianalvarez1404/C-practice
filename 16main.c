#include <stdio.h>
#include <stdlib.h>
#include "16single_linked_list.h"

void unitTest1(){
  linked_list_t* new_list = create_linked_list();
  append_to_linked_list(new_list, 1);
  append_to_linked_list(new_list, 3);
  append_to_linked_list(new_list, 5);
  
  // print_linked_list(new_list);
  
  linked_list_t* list_5items = create_linked_list_of_five_items();
  append_to_linked_list(list_5items, 6);
  print_linked_list(list_5items);

  free_linked_list(new_list);
  free_linked_list(list_5items);
}

void unitTest2(){
  linked_list_t* new_list = create_linked_list();
  free_linked_list(new_list);
}

int main(){

  unitTest1();
  unitTest2();
  return 0;
}