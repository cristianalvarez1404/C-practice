#include <stdio.h>
#include <string.h>

int main(){
  // char str1[10] = "Hello";
  // char str2[10];
  // char str3[10];

  // printf("%s\n", strcpy(str2, str1));
  // printf("%s", str2);
  // strcpy(str3, strcpy(str2, str1)); // chain strcpy calls
  // printf("%s %s", str2, str3);
  
  char str1[6] = "Hello";
  char str2[4];

  strncpy(str2,str1, sizeof(str2)); // ASSING IN THE LAST POSITION THE NULL CHARACTER, IT'S IMPORTANT BECASUSE STRNCPY DON'T ASSIGN IT
  str2[sizeof(str2) - 1] = '\0';
  printf("%s\n", str2);

  return 0;
}