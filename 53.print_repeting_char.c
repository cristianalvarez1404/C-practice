#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void print_first_repeat(char *s);

int main()
{
  char s[] = "abcdefghijklmnopjklmnop";
  print_first_repeat(s);

  return 0;
}

void print_first_repeat(char *s)
{
  int len = strlen(s);
  bool found_repeat = false;

  for(int i = 0; i < len; i++)
  {
    found_repeat = false;
    for(int j = 0; j < len; j++)
    {
      if(s[i] == s[j] && i != j)
        found_repeat = true;

      if(found_repeat){
        printf("%c ",s[i]);
        break;
      }
    }
  }

  if(!found_repeat)
    printf("No repeting character found!");

}