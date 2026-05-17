#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  int num = 185;
  int binary[sizeof(int) * CHAR_BIT] = {0};
  int i = 0;

  while(num > 0){
    binary[i++] = num % 2;
    num /= 2;
  }

  for(int j = i - 1; j >= 0; j--)
    printf("%d", binary[j]);

  return 0;
}
