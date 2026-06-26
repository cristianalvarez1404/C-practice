#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

const int BUFSIZE = 4096;

int main(){
  FILE *pipe = popen("echo \"Hello\" | ./testprogram", "r");

  char buffer[BUFSIZE];
  while(fgets(buffer, BUFSIZE, pipe)){
    printf("OUT: %s\n", buffer);
  }
  pclose(pipe);
}