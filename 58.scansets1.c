#include <stdio.h>

int main(int argc, char **argv) {
  int x = 7;

  int result;
  char nextch;

  do {
    printf("new x? ");
    result = scanf("%d%c", &x, &nextch);
    fflush(stdin);
  } while(result == 0 || nextch != '\n');
  printf("x = %d\n", x);

  printf("What is your name? ");
  char name[20];
  scanf("%19s", name);
  printf("name = %s\n", name);
}