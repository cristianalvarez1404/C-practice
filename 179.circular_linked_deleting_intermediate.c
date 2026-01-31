#include <stdio.h>
#include <stdlib.h>

struct node
{
  struct node* prev;
  int data;
  struct node* next;
};

struct node* addToEmpty(int data)
{
  struct node* temp = malloc(sizeof(struct node));
  temp->prev = temp;
  temp->data = data;
  temp->next = temp;
  return temp;
}

struct node* addAtBeg(struct node* tail, int data)
{
  struct node* temp = tail->next;
  struct node* newP = malloc(sizeof(struct node));
  newP->prev = NULL;
  newP->data = data;
  newP->next = NULL;

  newP->prev = tail;
  newP->next = temp;
  temp->prev = newP;
  tail->next = newP;

  return tail;
}

struct node* addAtEnd(struct node* tail, int data)
{
  struct node* newP = addToEmpty(data);
  if(tail == NULL)
  {
    return newP;
  }
  else
  {
    struct node* temp = tail->next;
    newP->next = temp;
    newP->prev = tail;
    tail->next = newP;
    temp->prev = newP;
    tail = newP;
    return tail;
  }
}

void print(struct node* tail)
{
  if(tail == NULL)
    printf("No node in the list");
  else {
    struct node* temp = tail->next;
    do
    {
      printf("%d ", temp->data);
      temp = temp->next;
    } while(temp != tail->next);
  }
  printf("\n");
}

struct node* addAfterPos(struct node* tail, int data, int pos)
{
  struct node* newP = addToEmpty(data);
  if(tail == NULL)
    return newP;
  struct node* temp = tail->next;
  
  while(pos > 1)
  {
    temp = temp->next;
    pos--;
  }
  newP->prev = temp;
  newP->next = temp->next;
  temp->next->prev = newP;
  temp->next = newP;
  if(temp == tail)
    tail = tail->next;

  return tail;
}

struct node* delFirst(struct node* tail)
{
  if(tail == NULL)
    return tail;
  struct node* temp = tail->next;
  if(temp == tail)
  {
    free(tail);
    tail = NULL;
    return tail;
  }
  tail->next = temp->next;
  temp->next->prev = tail;
  free(temp);
  return tail;
}

struct node* delLast(struct node* tail)
{
  struct node* temp;
  if(tail == NULL)
    return tail;

  if(temp == tail)
  {
    free(tail);
    tail = NULL;
    return tail;
  }
  temp = tail->prev;
  temp->next = tail->next;
  tail->next->prev = temp;
  free(tail);
  tail = temp;

  return tail;
}

struct node* delInter(struct node* tail, int pos)
{
  struct node* temp = tail->next;
  while(pos > 1)
  {
    temp = temp->next;
    pos--;
  }
  struct node* temp2 = temp->prev;
  temp2->next = temp->next;
  temp->next->prev = temp2;
  free(temp);
  if(temp == tail)
    tail = temp2;

  return tail;
}

int main(){
  // Deleting the intermediate node
  struct node* tail = NULL;
  tail = addToEmpty(34);
  tail = addAtEnd(tail, 45);
  tail = addAtEnd(tail, 56);

  printf("List before Deletion: ");
  print(tail);

  tail = delInter(tail, 3);

  printf("List after Deletion: ");
  print(tail);

  return 0;
}