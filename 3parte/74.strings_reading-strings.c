#include <stdio.h>

int main(){
  //Reading strings with scanf and gets

  char a[10];
  //printf("Enter the string:\n");
  //scanf("%10s", a); 
  //printf("%s", a);
  // a is tretared as a pointer to the first element of the array, therefore, there is no need to put & 
  //Scanf DOES'T STORE THE WHITE SPACES CHARACTERS IN THE STRING VARIABLE. STORE ONLY CHARACTERS UNTIL ENCOUNTER A WHITE SPACE. that's why we use gets() function to read an entire line of input
  
  /*----------------------------------*/
  char b[15];
  printf("Enter the string:\n");
  //gets(b); //DONT USE THIS, IT'S INSECURE because NEVER CHECKS THE LIMIT OF INPUT CHARACTERS. when we use scanf please, assing it the length scanf("%15s",b);
  fgets(b, sizeof(b),stdin);
  printf("%s", b); 

  return 0;
}