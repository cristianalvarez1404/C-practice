#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
  int age;
  int id;
  char average_grade;
} student_t;

void print_student(student_t *s) {
  printf("s.age           : %d\n", s->age);
  printf("s.id            : %d\n", (*s).id);
  printf("s.average_grade : %c\n", s->average_grade);
}

int main(){
  //struct student mike;
  student_t mike;
  mike.age = 500;
  mike.id = 123;
  mike.average_grade = 'A';
  print_student(&mike);
  
  student_t class[500];
  class[0].age = 49;
  
  student_t* class1 = malloc(sizeof(student_t) * 700);

  free(class1);

  return 0;
}