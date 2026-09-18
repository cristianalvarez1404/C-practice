#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void PrintUpperCase(char* nullTerminatedCharArray){

  //Allocate on the stack for a new mutated string
  //Add +1 for the null terminated character

  char* printName = (char*)alloca(strlen(nullTerminatedCharArray)+1);
  strcpy(printName, nullTerminatedCharArray);

  //Set the individual characters to uppercase
  size_t i = 0;
  while(printName[i] != '\0'){
    printName[i] = toupper(nullTerminatedCharArray[i]);
    ++i;
  }

  //Print all at once the uppercase string with an endline
  printf("%s\n", printName);
}

int main(){

  char* eightBytes = (char*)calloc(8, sizeof(char));
  size_t i = 0;
  while(i < 8){
    printf("%d,",eightBytes[i]);
    i++;
  }
  printf("\n\n");

  memset(eightBytes, 65, 8); 

  i = 0;
  while(i < 8){
    printf("%d,", eightBytes[i]);
    ++i;
  }

  printf("\n\n");

  eightBytes = realloc(eightBytes, 16);
  i = 0;
  while(i < 16){
    printf("%d,", eightBytes[i]);
    ++i;
  }

  printf("\n\n");

  PrintUpperCase("mike");

  printf("\n\n\n");

  free(eightBytes);

  return 0;
}