#include <stdio.h>

int main(){

  int employeeCode = 1000;
  while(employeeCode != 0) {
    printf("Sending email...");
    employeeCode--;
  }

  for( int i = 0; i < 5; i++){
    printf("%d",i);
  }

  int z = 0;
  do {
    printf("Printing one time!");
  }while(z != 0);

  return 0;
}