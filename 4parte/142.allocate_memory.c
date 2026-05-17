#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 4096

int main()
{
  char **strings;
  int total = 0;

  printf("Enter Number Of Strings: ");
  scanf("%d", &total);

  strings = malloc(sizeof(char *) * total);

  char buffer[BUFFER_SIZE];
  int length = 0;

  while(getchar() != '\n');

  printf("\n");
  for(int i = 0; i < total; i++)
  {
    printf("Enter string %d: ", i + 1);
    fgets(buffer, BUFFER_SIZE, stdin);
    length = strlen(buffer);
    buffer[length - 1] = '\0';
    strings[i] = malloc(length * sizeof(char));
    strcpy(strings[i], buffer);
  }

  printf("\nResulting strings array:\n\n");
  for(int i = 0; i < total; i++)
  {
    printf("strings[%d] = %s\n", i, strings[i]);
  }
  printf("\n");

  return 0;
}