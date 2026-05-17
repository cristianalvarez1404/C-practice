#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool endswith(char *string, char *end);

int main()
{
  char mystring[] = "Roses are red";

  char end_ok[] = "red";

  if(endswith(mystring, end_ok))
    printf("The string ends with %s.", mystring, end_ok);
  else
    printf("The string does't end with %s.", mystring, end_ok);

  return 0;
}

bool endswith(char *string, char *end)
{
  int len_1 = strlen(string);
  int len_2 = strlen(end);
  
  if(len_2 > len_1)
    return false;
  
  // int i = 0;
  // while(i < len_2)
  // {
  //   if(string[len_1 - len_2 + i] != end[i])
  //     return false;
  //   i++;
  // }

  return strcmp(string + (len_1 - len_2) ,end) == 0;
}