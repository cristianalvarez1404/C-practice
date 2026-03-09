#include <stdio.h>
#include <string.h>

int main(void)
{
  char string[] = "hola amigos";
  int len = strlen(string);

  for(int i = 0; i < len; i++){
    switch(string[i])
    { 
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
        for(int y = i; y < len; y++){
          string[y] = string[y+1];
        }
        len--;
        i--;
        break;
    }
  }

  printf("%s",string);

  return 0;
}