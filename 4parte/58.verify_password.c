#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool verify_password(char *s);

int main()
{
  char p[] = "Ax5@abcdefgh";
  bool valid_password = verify_password(p);

  if(valid_password)
    printf("Valid password");
  else
    printf("Invalid password");

  return 0;
}

bool verify_password(char *s)
{
  int len = strlen(s);
  bool has_upper = false, has_lower = false, has_digit = false, has_punct = false;

  if(len < 8) return false;

  for(int i = 0; i < len; i++)
  {
    if(isupper(s[i])) has_upper = true;
    else if(islower(s[i])) has_lower = true;
    else if(isdigit(s[i])) has_digit = true;
    else if(ispunct(s[i])) has_punct = true;
  }

  return has_upper && has_lower && has_digit && has_punct;
}