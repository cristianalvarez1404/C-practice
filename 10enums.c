#include <stdio.h>
#include <string.h>

enum boolean {
  NO,
  YES
};

enum escapes {
  BELL = '\a',
  BACKSPACE = '\b',
  TAB = '\t',
  NEWLINE = '\n',
  VTAB = '\v',
  RETURN = '\r'
}

int main(){
  long int num = 0;
  const int num2 = 123456679L;
  int num3 = 0x1f;
  char text[] = "hola mundo";

  printf("%d\n",num3);
  printf("%d\n", strlen(text));

  return 0;
}