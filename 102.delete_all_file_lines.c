#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define FILENAME_SIZE 1024
#define MAX_LINE 2048

int main()
{
  char filename[FILENAME_SIZE];
  char temp_filename[FILENAME_SIZE];
  char delete_line[MAX_LINE];
  char buffer[MAX_LINE];
  FILE *file, *temp;

  printf("File: "); 
  fgets(filename, FILENAME_SIZE,stdin);
  filename[strlen(filename) - 1] = '\0';

  strcpy(temp_filename, "temp____");
  strcat(temp_filename, filename);

  printf("Delete Line: ");
  fgets(delete_line, MAX_LINE, stdin);

  file = fopen(filename, "r");
  temp = fopen(temp_filename, "w");

  if(file == NULL || temp == NULL)
  {
    printf("Error opening file(s).\n");
    return 1;
  }

  bool keep_reading = true;
  do
  {
    fgets(buffer, MAX_LINE, file);
    if(feof(file)) keep_reading = false;
    else if (strcmp(buffer, delete_line) != 0)
      fputs(buffer, temp);

  }while(keep_reading);

  fclose(file);
  fclose(temp);

  remove(filename);
  rename(temp_filename, filename);

  return 0;
}