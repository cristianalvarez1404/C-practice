#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *link;
};

struct node *del_first(struct node *head)
{ // O(1) => Deleting first node in linked list
  if (head == NULL)
    printf("List is already empty!");
  else
  {
    struct node *temp = head;
    head = head->link;
    free(head);
    temp = NULL;
  }
  return head;
};

int del_first_arr(int arr[], int n) //O(n)
{
  int i;
  if (n == 0)
  {
    printf("Array is empty.");
    return n;
  }
  for (i = 0; i < n - 1; i++)
    arr[i] = arr[i + 1];
  return n - 1;
}

int main()
{
  int arr[8];
  int n, i;
  printf("Enter the number of elemenets: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  n = del_first_arr(arr, n);
  for (i = 0; i < n; i++)
    printf("%d", arr[i]);

  return 0;
}
