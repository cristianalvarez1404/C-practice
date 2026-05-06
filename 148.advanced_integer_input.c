#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFFER_SIZE 4096

bool parse_int(char *string, int *integer);

int main()
{
  int integer = 0;
  bool parsed_correct = true;

  do
  {
    printf("Enter integer: ");

    char buffer[BUFFER_SIZE];

    fgets(buffer, BUFFER_SIZE, stdin);

    parsed_correct = parse_int(buffer, &integer);

    if(!parsed_correct)
      printf("Must be an integer value!\n");

  }while(!parsed_correct);

  printf("Integer: %d\n", integer);

  return 0;
}

bool parse_int(char *string, int *integer)
{
  int i = 0;

  while(isspace(string[i])) i++;

  int length = strlen(string);

  if(length == i) return false;

  char integer_buffer[BUFFER_SIZE];
  int integer_chars = 0;

  if(string[i] == '-')
  {
    integer_buffer[integer_chars] = '-';
    integer_chars++;
    i++;
    
    if(!isdigit(string[i])) return false;
  }

  while(i < length && !isspace(string[i]))
  {
    if(!isdigit(string[i])) return false;
    integer_buffer[integer_chars] = string[i];
    integer_chars++;
    i++;
  }

  integer_buffer[integer_chars] = '\0';

  while(isspace(string[i])) i++;

  if(string[i] != '\0') return false;

  *integer = atoi(integer_buffer);

  return true;
}