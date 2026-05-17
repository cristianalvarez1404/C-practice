#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

int main(void)
{
  char filename[1024];
  FILE *read;
  FILE *write;
  char remove;

  printf("Char: ");
  scanf("%c", &remove);

  printf("File: ");
  scanf("%s", filename);

  read = fopen(filename, "r");
  write = fopen(filename, "r+");

  if(read == NULL || write == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  int c;
  int count = 0;
  while(true)
  {
    c = fgetc(read);

    if(feof(read) || ferror(read))
      break;
    
    if(c != remove)
    {
      fputc(c, write);
      count++;
    }
  }

  if(truncate(filename, count) == -1)
  {
    printf("Error truncating file.\n");
    return 1;
  }
  
  return 0;
}