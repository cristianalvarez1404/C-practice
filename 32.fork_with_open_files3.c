#include <stdint.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void)
{
  int fd = open("example2.c", O_RDONLY | S_IRUSR | S_IWUSR);

  if(fd < 0)
  {
    perror("open");
    return EXIT_FAILURE;
  }

  pid_t pid = fork();

  int bufsize = 1024;
  int numbytes = 0;
  char *buf = malloc(bufsize);

  while(read(fd, buf + numbytes, 1) == 1){
    ++numbytes;
    if(numbytes >= bufsize - 1){
      bufsize *= 2;
      buf = realloc(buf, bufsize);
    }
    buf[numbytes] = 0;
  }

  if(pid == 0) {
    printf("Child => %s\n", buf);
  } else {
    printf("Parent => %s\n", buf);
  }
  close(fd);
  return EXIT_SUCCESS;
}