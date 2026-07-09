#include <stdio.h>
#include <string.h>

struct Person {
  int age;
  char name[30];
  double height;
};

void printPerson(const struct Person *p) {
  printf("Person: %s (%d years old & %.1lf feet tall)\n", p->name, p->age, p->height);
}

int main() {
  struct Person person1;
  struct Person person2;

  person1.age = 35;
  strncpy(person1.name, "Thomas", sizeof(person1.name));
  person1.height = 5.3;

  //person2.age = person1.age;
  //person2.height = person1.height;
  //memcpy(person2.name, person1.name, sizeof(person1.name));

  //memcpy(&person2, &person1, sizeof(person1));

  person2 = person1;

  printPerson(&person1);
  printPerson(&person2);
}