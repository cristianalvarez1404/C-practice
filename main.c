#include <stdio.h>

int main(){
  // int n;
  // printf("Enter a number: \n");
  // scanf("%d", &n);

  // while(n != 0){
  //   if( n < 0)
  //     break;
  //   printf("Enter a number: \n");
  //   scanf("%d", &n);
  // }

  // printf("Your number is: %d", n);

  int i = 1024;
  for(;i; i >>= 1)
    printf("Hello World!\n");
  
  return 0;
}