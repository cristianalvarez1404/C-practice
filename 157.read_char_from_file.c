#include <stdio.h>
#include <stdbool.h>

int main()
{
  FILE *file;

  file = fopen("file.txt", "r");

  if(file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  int c;
  char string[128];
  int i = 0;

  while(true)
  {
    c = fgetc(file);
  
    if(feof(file)) break;
    if(ferror(file)) break;
    
    string[i] = c;
    i++;

    printf("%c\n", c);
  }

  string[i] = '\0';
  printf("string: %s\n", string);
  
  // while((c = fgetc(file)) != EOF)
  // {
  //   printf("%c", c);
  // }

  fclose(file);

  return 0;
}