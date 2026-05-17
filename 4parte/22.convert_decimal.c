#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convert(char *string);

int main(){
  char s1[] = "10101";
  int val1 = convert(s1);
  printf("s1 in dec: %d\n", val1);
  
  char s2[] = "11111";
  int val2 = convert(s2);
  printf("s2 in dec: %d\n", val2);

  return 0;
}

int convert(char *string)
{
  int slen = strlen(string);
  int total = 0;
  int decval = 1;

  for(int i = (slen - 1); i >= 0; i-- )
  {
    if(string[i] == '1') total += decval;
    decval *= 2;
  }

  return total;
}