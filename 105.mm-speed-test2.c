#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
  int fd = open(argv[1], O_RDONLY);
  struct stat sb;

  if(fstat(fd, &sb) == -1)
  {
    perror("couldn't get file size.\n");
  }

  char *file_in_memory = mmap(NULL, sb.st_size, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

  srand(45);
  for(int i = 0; i < 5000; i++)
  {
    int index = rand() % sb.st_size;
    printf("%c", file_in_memory[index]);
  }

  close(fd);
}