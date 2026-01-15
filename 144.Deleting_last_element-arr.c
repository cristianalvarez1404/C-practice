#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *link;
};

void del_last(struct node *head){ // O(n)
  if(head == NULL)
    printf("List is already empty!");
  else if(head->link == NULL)
  {
    free(head);
    head = NULL;
  }
  else 
  {
    struct node *temp = head;
    struct node *temp2 = head;
    while(temp->link != NULL){
      temp2 = temp;
      temp = temp->link;
    }
    temp2->link = NULL;
    free(temp);
    temp = NULL;
  }
}

int main(){
  //deleting in array (it's a illution, only dismiss the size) => O(1)

  int arr[] = {23, 3, 45, 12, 67, 54, 6, 4};
  int size = sizeof(arr) / sizeof(arr[0]);
  int i;
  size = size -1;
  for(i = 0; i < size; i++)
    printf("%d ", arr[i]);

  return 0;
}