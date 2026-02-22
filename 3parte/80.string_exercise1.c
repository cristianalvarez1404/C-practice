#include <stdio.h>
#include <string.h>

void foo(char *a)
{
  if(*a && *a != ' ')
  {
    foo(a + 1);
    putchar(*a);
  }
}

int main(){
  /* No output will be printed because \0 take the first element */
  // char p[20];
  // char *s = "string";
  // int length = strlen(s);
  // int i;
  // for(i = 0; i < length; i++)
  //   p[i] = s[length - i];

  // printf("%s", p);

  /* second problem => 2011 */
  // char c[] = "GATE2011";
  // char *p = c;
  // printf("%s", p + p[3] - p[1]); 

  /* Third problem => DCBA */
  
  // char *ptr = "ABCD EFGH";
  // foo(ptr);

  /* Fourth problem*/


  return 0;
}