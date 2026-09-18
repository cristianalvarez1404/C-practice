#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv, char** envp){

  printf("argc: %d\n", argc);

  if(argc != 3){
    printf("usage: ./a 1 2\n");
  }

  int first_argument = strtol(argv[1], NULL, 10);
  int second_argument = strtol(argv[2], NULL, 10);
  int result1 = first_argument + second_argument;

  printf("%d + %d = %d\n", 
    first_argument, 
    second_argument, 
    result1);

  long result = 0;
  for(int i = 1; i < argc; i++){
    result +=  strtol(argv[i], NULL, 10);
  }

  printf("Total => %ld\n", result);

  return 0;
}