#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50

typedef struct person
{
  char name[NAME_LENGTH];
  int age;
  int height;
} Person;

int compare_people(const void *pa, const void *pb)
{
  const Person *A = *(const Person **)pa;
  const Person *B = *(const Person **)pb;

  // Sort by height
  return A->height - B->height;
}