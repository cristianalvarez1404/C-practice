#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_rotation(char *s1, char *s2);

int main()
{
  char sA[] = "LMNOP";
  char sB[] = "NOPLM";

  if(is_rotation(sA, sB))
    printf("%s is a rotation of %s\n", sA, sB);
  else
    printf("%s is NOT a rotation of %s\n", sA, sB);

  return 0;
}

bool is_rotation(char *s1, char *s2)
{
  int s1_length = strlen(s1);
  int s2_length = strlen(s2);

  if(s1_length != s2_length) return false;

  int check_size = s1_length + s1_length + 1;

  char *check_string = malloc(sizeof(char) * check_size);

  strcpy(check_string, s1);
  strcat(check_string, s1);

  char *check_result = strstr(check_string, s2);

  free(check_string);

  if(check_result == NULL) return false;
  else return true;

}