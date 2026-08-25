#include <stdio.h>

#define STRSIZE 256

int main() {
  char *str = malloc(STRSIZE);

  strcpy(str, "Hello, My name is John Doe");
  printf("%s\n", str);
  free(str);
  strcat(str, "you sent signal #9 to my father");
}