#include <stdio.h>

int main(){

  char result;
  int marks = 50;

  // if(marks > 33){
  //   result = 'p';
  // }
  // else {
  //   result = 'f';
  // }

  result = (marks > 33) ? 'p' : 'f';

  printf("%c",result);

  return 0;
}