#include <stdio.h>

int main(){

  char name[20];
  int age = 0;

  printf("What is your name?\n");
  scanf("%s",name);

  printf("What is your age?\n");
  scanf("%d",&age);

  printf("Hello %s you are %d years old!\n",name,age);


  return 0;
}