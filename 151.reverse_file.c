#include <stdio.h>

int main()
{
  FILE *file;
  FILE *reverse;

  char filename[1024];
  char reversename[1024];

  printf("File To Reverse: ");
  scanf("%s", filename);

  printf("New File: ");
  scanf("%s", reversename);

  file = fopen(filename, "r");
  reverse = fopen(reversename, "w");

  if(file == NULL || reverse == NULL)
  {
    printf("Error opening file(s)\n");
    return 1;
  }

  fseek(file, 0, SEEK_END);
  int length = ftell(file);
  fseek(file, -1, SEEK_CUR);

  while(length > 0)
  {
    char c = fgetc(file);
    fputc(c, reverse);
    printf("%c", c);

    fseek(file, -2, SEEK_CUR);

    length--;
  }

  printf("\n");

  fclose(file);
  fclose(reverse);

  return 0;
}