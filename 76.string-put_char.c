#include <stdio.h>

int main(){
  // putchar => accepts an integer argument and returns and integer 
  // char and int is equal to represent character the only diffent is the size char 1byte int 4bytes
  int ch;
  for(ch = 'A'; ch <= 'Z'; ch++)
    putchar(ch); //putchar puts the character in the screen OUTPUT
 
  return 0;
}