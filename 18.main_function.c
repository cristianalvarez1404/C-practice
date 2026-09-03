#include <stdio.h>

int main(int argc, char** argv, char** envp){

  printf("argc: %d\n", argc);

  for(int i = 0; i < argc; i++){
    printf("\t%s\n", argv[i]);
  }

  return 0;
}