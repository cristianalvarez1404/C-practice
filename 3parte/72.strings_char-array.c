#include <stdio.h>

int main(){
  // Declaring a string variable
  // String variable is a one dimensional array of characters that is capable of holding a string at a time.

  char s[6] = "Hello"; 
  // This is equal to s[] = "Hello"; automatically is assigne 6
  //Don't forget to add 1 character to \0 Null character.Remember this is not a STRING LITERAL BECAUSE THIS VARIABLE WAS ASSIGNED TO CHARACTER ARRAY, THEN THIS CHARACTER ARRAY IS TREATED LIKE OTHER TYPES OF ARRAYS. WE CAN MODIFY ITS CHARACTERS, AGAIN WE CAN MODIFY ITS CHARACTERS.
  char t[6] = {'H','e','l','l','o', '\0'}; // It's the same thing

  //WE CAN'T MODIFY A STRING LITERAL BUT WE CAN MODIFY A CHAR ARRAY
  char *ptr = "Hello"; //String literal is inmutable
  *ptr = 'M';   

  char v[6];  
  int i;

  for(i = 0; s[i] != '\0'; i++){
    v[i] = s[i];
  }
  v[i] = '\0';

  printf("%s",v);

  return 0;
}