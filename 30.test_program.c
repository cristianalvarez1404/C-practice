#include <stdio.h>
#include <stdlib.h>

const int BUFSIZE=4096;

int main(int argc, char **argv){
  fprintf(stdout, "Dumping input to stdout.\n");

  char buffer[BUFSIZE];
  while(fgets(buffer, BUFSIZE, stdin)){
    fprintf(stdout, "INPUT: %s\n", buffer);
  }
  fprintf(stderr, "BTW, this is stderr.\n");
  return EXIT_SUCCESS;
}