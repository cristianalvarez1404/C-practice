#include <stdio.h>
#include <string.h>

int main(){

  // char fruits[][12] = {"2 Orange","2 Apples","3 Bananas", "1 Pineapple"}; //2D array
  char *fruits[] = {"2 Orange","2 Apples","3 Bananas", "1 Pineapple"}; //2D array pointers. It prevents wasting memory, because prevent the define of the array length, therefore we can optimece the memory without full unnecesary array with \0
  
  if(strcmp(fruits[1], fruits[2]) < 0)
    printf("%s are lesser than %s", fruits[1], fruits[2]);
  else if(strcmp(fruits[1], fruits[2]) > 0)
    printf("%s are greater than %s", fruits[1], fruits[2]);

  return 0;
}