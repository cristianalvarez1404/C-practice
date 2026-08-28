#include <stdio.h>
#include <string.h>

int main(){

  char a = 'a'; // character
  puts(a);

  char *s = "Hello"; // String literal => read-only
  puts(s);

  printf("a[0] = %c\n", s[0]);
  s[0] = 'b'; // dont allowed

  char b[] = "Hello"; //c-string 1 dimensional array, we can modify individual characters

  printf("length of string a is: %ld\n", strlen(b));

  return 0;
}