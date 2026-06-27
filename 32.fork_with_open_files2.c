#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
  int fd = open("test2.txt", O_WRONLY | O_CREATE, S_IRUSR | S_IWUSR);

  if(fd < 0)
  {
    perror("open");
    return EXIT_FAILURE;
  }

  write(fd, "Hi\n", 3);

  if(fork() == 0)
  {
    write(fd, "Child\n", 6);
    close(fd);
  }
  else
  {
    wait(NULL);
    write(fd, "Parent\n", 7);
    close(fd);
  }
}