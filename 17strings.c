#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t string_length(const char *input){
  size_t length = 0;
  //input[0] = 'M' => error, it's constant; 

  while(input[length] != '\0'){
    length++;
  }

  return length;
}

void string_append(char *destination, const char* source){
  //Compute lengths of input and source
  size_t dst_length = string_length(destination);
  size_t src_length = string_length(source);

  //Our new buffer for our combineed
  char *new_str = (char*)malloc(sizeof(char) * (dst_length + src_length + 1));

  //copy in first string
  size_t i = 0;
  while(i < dst_length){
    new_str[i] = destination[i];
    i++;
  }

  //copy in second into next portion of buffer
  size_t y = 0;
  while(y < src_length){
    new_str[i] = source[y];
    y++;
    i++;
  }

  //Add our null terminating character at the end
  new_str[i] = '\0';
  destination = new_str;
}

int main(){
  // c-strings => Array of characters => WE CAN CHANGE INDIVIDUAL ELEMENTS BY INDEX
  //A CHARACTER ARRAY NAME[5] AND POINTER TO A CHAR CHAR* ARE DIFFERENT TO THE COMPILER.
  //const => READ ONLY
  //size_t => a data type for LONG UNSIGNED INT WHEN WE NEED TO RETURN A SIZE
  
  char hello[6] = {'h','e','l','l','o','\0'};
  printf("%s\n",hello);

  char name[5];
  name[0] = 'J';
  name[1] = 'o';
  name[2] = 'h';
  name[3] = 'n';
  name[4] = '\0';
  printf("%s\n",name);
  printf("%ld\n", string_length(name));

  char* name2  = (char*)malloc(sizeof(char) * 5);
  name2[0] = 'm';
  name2[1] = 'i';
  name2[2] = 'k';
  name2[3] = 'e';
  name2[4] = '\0';

  printf("%s\n",name2);
  free(name2);

  // String literal
  const char *name3 = "Robert"; // READ ONLY

  char name4[] = {'h','e','l','l','o','\0'};
  string_append(name4, " world!");

  printf("%s\n", name4);

  return 0;
}