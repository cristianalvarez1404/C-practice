#include <stdio.h>

int get_string_length(char *str){
  int offset = 0;
  while(str[offset] != 0){
    offset++;
  }
  return offset;
}

void copy_string(char *from, char *to){
  int offset = 0;
  while(from[offset] != 0){
    to[offset] = from[offset];
    offset++;
  }
  to[offset] = '\0';
}

int main(int argc, char **argv){
  char *str1 = "Hello World!";
  char str2[] = "Hello World!";
  char newstring[500];
  printf("Hello World!\xA");
  printf("%s\xA", str1);
  printf("%s\xA", str2);
  printf("%s has length %d bytes\n", str1, get_string_length(str1));
  printf("%s has length %lu bytes\n", str2, get_string_length(str2));
  copy_string(str1, newstring);
  printf("%s", newstring);

  return 0;
}