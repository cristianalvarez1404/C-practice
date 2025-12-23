#include <stdio.h>

int main(){
  //Strings with printf and puts functions
  char *ptr = "Hello World";

  // printf("%s",ptr);
  // printf("%.5s",ptr);
  // printf("%6.5s",ptr);
  
  /*-----------------------------------------------------------*/
  // puts() function is a function declared in <stdio.h> library and is used to write strings to the output screen
  // puts() function automatically writes a newline character after writing the string to the output screen

  char *s = "Hello";
  puts(s);
  puts(s);

  return 0;
}