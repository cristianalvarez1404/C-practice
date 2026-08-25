#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <fcntl.h>
#include <stdarg.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int myprint(const char *prefix, const char *fmt, ...){
  va_list args;
  va_start(args, fmt);

  printf("%s - ", prefix);
  int result = vprintf(fmt, args);
  va_end(args);
  return result;
}

int main()
{
  int x = 42;
  printf("%d @ %p\n", x, &x);

  // print to somewhere else -- maybe a file or file-like thing
  FILE* file = fopen("output.txt", "w");
  fprintf(file,"F: %d @ %p\n", x, &x);

  int filedesc = open("output2.txt", O_WRONLY | O_CREAT);
  dprintf(fileno(filedesc),"D: %d @ %p\n", x, &x);

  fclose(file);
  close(filedesc);

  //print to a string
  char buf[BUFFER_SIZE];
  sprintf(buf,"F: %d @ %p\n", x, &x);
  snprintf(buf,BUFFER_SIZE, "F: %d @ %p\n", x, &x);

  char *buf2;
  asprintf(&buf2, "S: %d @ %p\n", x, &x);
  free(buf2);

  myprintf("myprintf", "%d @ %p\n", x, &x);

}