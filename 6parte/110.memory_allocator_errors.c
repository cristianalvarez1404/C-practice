#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

void error_and_exit() {
  printf("error: memory exhausted\n");
  exit(EXIT_FAILURE);
}

void *xmalloc (size_t size) { //REPLACE ORIGINAL
  void *result = malloc(size);
  if(result == NULL) {
    error_and_exit();
  }
  return result;
}

int main() {
  int *p1 = xmalloc(sizeof(int));
  int *p2 = xmalloc(sizeof(int));

  *p1 = 4;
  *p2 = 234;
  printf("%d, %d\n", *p1, *p2);
}