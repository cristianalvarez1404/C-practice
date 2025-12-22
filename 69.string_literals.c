#include <stdio.h>

int main(){
  // String literals or string constant => Sequence of characters enclosed within double quotes.

  //printf("%s", "Hello everyone!");
  // '\' => splicing

  printf("%s", "You have to dream before your dreams can come true.\
    --A.P.J. Abdul Kalam\n");
  
  printf("%s", "You have to dream before your dreams can come true."
    " --A.P.J. Abdul Kalam");

  //String literals are stored as an array of characters
  // E A R T H \0 => '\0' null caracter, indicates the end of the string

  //In C, compiler treats a string literal as a pointer to the first character. So to the printf or scanf we are passing a pointer to the first character of a string literal. 
  
  //Both printf and scanf functions expects a character pointer(char*) as an argument.

  return 0;
}