#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415

typedef unsigned int uint;

typedef int* intptr;

struct Student {
  int id;
  char grade;
};

typedef struct Student {
  int id;
  char grade;
} student_tt;

typedef struct Student student_t;

typedef float(*pfn)(float, float);

float add(float a, float b){
  return a + b;
}

int main(){

  intptr ptr = NULL; 

  float value = PI;
  uint value2 = 56;
  char a = 'a';

  struct Student mike;
  mike.id = 5;
  mike.grade = 'A';

  student_t mike2;
  mike2.id = 6;
  mike2.grade = 'B';

  pfn operation = add;
  float total = add(5.0, 3.5);

  printf("value: %f\n", value);
  printf("value2: %d\n", value2);

  return 0;
}