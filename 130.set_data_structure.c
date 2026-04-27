#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
  int *members;
  int length;
} Set;

Set* init();
bool is_empty(Set *set);
void insert(Set *set, int member);
void print_set(Set *set);
Set *set_union(Set *setA, Set *setB);
Set *set_insersection(Set *setA, Set *setB);
Set *set_difference(Set *setA, Set *setB);
bool is_subset(Set *setA, Set *setB);

int main()
{
  Set *setA = init();

  if(is_empty(setA)) printf("Set A is empty.\n");
  else printf("Set A is not empty.\n");

  insert(setA, 5);
  insert(setA, 6);
  insert(setA, 7);
  insert(setA, 7);
  insert(setA, 8);

  printf("Set A: ");
  print_set(setA);

  Set *setB = init();
  insert(setB, 7);
  insert(setB, 8);
  insert(setB, 9);
  insert(setB, 10);

  printf("Set B: ");
  print_set(setB);

  Set *setC = set_union(setA, setB);
  printf("A union B: ");
  print_set(setC);

  Set *setD = set_insersection(setA, setB);
  printf("A intersaction B: ");
  print_set(setD);

  Set *setE = set_difference(setA, setB);
  printf("A - B: ");
  print_set(setE);

  Set *setF = set_difference(setB, setA);
  printf("B - A: ");
  print_set(setF);

  if(is_subset(setA, setB))
    printf("A is a subset of B.\n");
  else
    printf("A is NOT a subset of B.\n");

  return 0;
}

Set* init()
{
  Set *new_set = malloc(sizeof(Set));
  new_set-> length = 0;
  new_set-> members = malloc(sizeof(int));
  return new_set;
}

bool is_empty(Set *set)
{
  return (set->length == 0);
}

void insert(Set *set, int member)
{
  bool in_set = false;
  
  for (int i = 0; i < set->length; i++)
    if(set->members[i] == member)
      in_set = true;
  
  if(!in_set)
  {
    set->members = realloc(set->members, sizeof(int) * (set->length + 1));
    set->members[set->length] = member;
    set->length = set->length + 1;
  }
}

void print_set(Set *set)
{
  for(int i = 0; i < set->length; i++)
    if(i == (set->length - 1))
      printf("%d\n", set->members[i]);
    else
      printf("%d,", set->members[i]);
}

Set *set_union(Set *setA, Set *setB)
{
  Set *new = init();
  for(int i = 0; i < setA->length; i++)
    insert(new, setA->members[i]);

  for(int i = 0; i < setB->length; i++)
    insert(new, setB->members[i]);

  return new;
}

Set *set_insersection(Set *setA, Set *setB)
{
  Set *new = init();  

  for(int i = 0; i < setA->length; i++)
    for(int j = 0; j < setB->length; j++)
      if(setA->members[i] == setB->members[j])
        insert(new, setA->members[i]);

  return new;
}

Set *set_difference(Set *setA, Set *setB)
{
   Set *new = init();  

  for(int i = 0; i < setA->length; i++)
  {
    bool inB = false;

    for(int j = 0; j < setB->length; j++)
      if(setA->members[i] == setB->members[j])
        inB = true;

    if(!inB) insert(new, setA->members[i]);

  }

  return new;
}

bool is_subset(Set *setA, Set *setB)
{
  for(int i = 0; i < setA->length; i++)
  {
    bool inB = false;
    
    for(int j = 0; j < setB->length; j++)
      if(setA->members[i] == setB->members[i])
        inB = true;
    
    if(!inB) return false;
  }

  return true;
}