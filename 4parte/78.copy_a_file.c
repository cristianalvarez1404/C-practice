#include <stdio.h>

int main(int argc, char *argv[])
{
  FILE *file, *copy;

  if(argc != 3)
  {
    printf("Argument number error.\n");
    return 1;
  }

  file = fopen(argv[1], "r");
  copy = fopen(argv[2], "w");

  if(file == NULL || copy == NULL)
  {
    printf("Error opening file(s).\n");
    return 1;
  }

  char c;
  while((c = fgetc(file)) != EOF)
    fputc(c, copy);

  fclose(file);
  fclose(copy);

  return 0;
}