#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/stat.h>

int main() {
  struct stat stbuf;
  fstat(fileno(stdout), &stbuf);
  fprintf(stderr, "block_size=%ld\n", stbuf.st_blksize);
  
  printf("Hello World\n");
}