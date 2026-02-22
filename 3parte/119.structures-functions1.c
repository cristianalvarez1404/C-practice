#include <stdio.h>

struct student {
  char name[50];
  int age;
  int roll_no;
  float marks;
};

struct charset {
  char s;
  int i;
};

// void print(struct student std){
//   printf("%s %d %d %.2f", std.name,std.age,std.roll_no,std.marks);
// }

void keyValue(char* s, int* i){
  scanf("%c %d", s, i);
}

int main(){ 
  //structures and functions

  /*
    1.We can pass structure members as arguments to a function
    2.We can pass their addresses(or references)
  */

  // struct student s1 = {"Nick", 16, 50, 72.5};
  // print(s1);

  int j;
  struct charset cs;
  keyValue(&cs.s, &cs.i);
  printf("%c %d", cs.s, cs.i);

  return 0;
}