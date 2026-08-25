#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFSIZE 4096

int main(int argc, char **argv){
  char item[BUFSIZE];
  char delim;
  int item_count = 0;

  while(scanf("%s", item) != EOF){
    printf("item: %s\n", item);
  }

  while(scanf("%4095s", item) != EOF){
    printf("item: %s\n", item);
  }

  while(scanf("%[A-Za-z0-9]", item) != EOF){
    printf("item: %s\n", item);
  }

  while(scanf("%[^,\n]%*c", item) != EOF){
    printf("item: %s\n", item);
  }

  while(scanf("%[^,\n]%c", item, &delim) != EOF){
    printf("%s, ", item);
    item_count++;
    if(delim == '\n'){
      printf("(%d items)\n", item_count);
      item_count = 0;
    }
  }
}