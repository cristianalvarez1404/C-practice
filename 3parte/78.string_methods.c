#include <stdio.h>
#include <string.h>

int main(){
  //string length => No count Null character
  //size_t => An unsigned integer type of at least 16 bits
  // char *str = "Hello World";
  // char str[100] = "Hello World";
  // printf("%d", strlen(str));


  //strcat => concatenation
  // char str1[100], str2[100];
  // strcpy(str1, "Welcome to ");
  // strcpy(str2, "our course");
  // strcat(str1, str2);

  // printf("%s", str2);
  // printf("%s", str1);


  //strncat => secure concatenation 

  // char str1[5], str2[100];
  // strcpy(str1, "He");
  // strcpy(str2, "llo!");
  // strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
  // printf("%s", str1);

  //string comparation function => strcmp
  //strcmp considers s1 < s2 if either one of the following conditions is satisfied.
  //when the first i character in s1 and s2 are same and (i + 1)st character of s1 is less than that of s2

  char *s1 = "abcd";
  char *s2 = "abce";
  if(strcmp(s1, s2) < 0)
    printf("s1 is less than s2");
  else
    printf("s1 is greater than or equal to s2");

  return 0;
}