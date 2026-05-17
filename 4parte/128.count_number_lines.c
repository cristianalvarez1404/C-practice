#include <stdio.h>
#include <stdbool.h>

#define MAX_LENGTH 1024

int main()
{
  FILE *file;

  char buffer[MAX_LENGTH];
  char file_to_read[MAX_LENGTH];

  printf("Enter File: ");
  scanf("%s", &file_to_read);
  
  file = fopen(file_to_read,"r");
  
  if(file == NULL)
  {
    printf("File not found");
    return 1;
  }

  bool keep_reading = true;
  int lines = 0;
  do
  {
    fgets(buffer, MAX_LENGTH, file);

    if(feof(file))
      keep_reading = false;

    lines++;

  }while(keep_reading);

  fclose(file);
  printf("Lines of file: %d", lines);

  return 0;
}