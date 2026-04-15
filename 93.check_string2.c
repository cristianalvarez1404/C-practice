#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool startswith(const char *string, const char*start);

int main()
{
  char test[] = "Roses and red";

  char startOK[] = "Roses";

  if(startswith(test,startOK))
    printf("The string starts with the string");
  else
    printf("The string does not start with the string");

  return 0;
}

bool startswith(const char *string, const char*start)
{
  int len1 = strlen(start);
  int len2 = strlen(string);

  if(len1 > len2) return false;

  for(int i = 0; i < len1; i++)
    if(string[i] != start[i]) return false;

  return true;

  // return strncmp(string, start, strlen(start)) == 0;
}