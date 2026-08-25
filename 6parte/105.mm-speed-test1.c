#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char** argv)
{
  FILE *fp = fopen(argv[1], "r");
  struct stat sb;

  if(stat(argv[1], &sb) == -1)
  {
    perror("couldn't get file size.\n");
  }

  srand(45);
  for(int i = 0; i < 5000; i++)
  {
    int index = rand() % sb.st_size;
    fseek(fp, index, SEEK_SET);
    printf("%c", fgetc(fp));
  }

  fclose(fp);
}