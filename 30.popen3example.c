#include "popen3.h"

const int BUFSIZE = 4096;

int main(){
  stdpipes mypipes = popen3("./testprogram");
  char buffer[BUFSIZE];

  fprintf(mypipes.in, "Hello Youtube\n");
  fclose(mypipes.in);

  while(fgets(buffer, BUFSIZE, mypipes.out)){
    printf("OUT: %s", buffer);
  }

  while(fgets(buffer, BUFSIZE, mypipes.err)){
    printf("ERR: %s", buffer);
  }

  fclose(mypipes.out);
}