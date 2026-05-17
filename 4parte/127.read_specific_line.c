#include <stdio.h>
#include <stdbool.h>

#define FILENAME_SIZE 1024
#define MAX_LINE 2048

int main()
{
  FILE *file;

  char filename[FILENAME_SIZE];
  char buffer[MAX_LINE];

  int read_line = 0;

  printf("File: ");
  scanf("%s", filename);

  printf("Read Line: ");
  scanf("%d", &read_line);

  file = fopen(filename, "r");

  if(file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  bool keep_reading = true;
  int current_line = 1;
  do
  {
    fgets(buffer, MAX_LINE, file);

    if(feof(file))
    {
      keep_reading = false;
      printf("File %d lines.\n", current_line - 1);
      printf("Couldn't find line %d.\n", read_line);
    }
    else if(current_line == read_line)
    {
      keep_reading = false;
      printf("Line:\n%s", buffer);
    }

    current_line++;

  }while(keep_reading);

  fclose(file);

  return 0;
}