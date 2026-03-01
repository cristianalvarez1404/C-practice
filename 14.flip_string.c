#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void to_upper(char str_arr[], int len){
  char new_str[len + 1];
  
  for(int i = 0; i < len; i++){
    new_str[i] = toupper(str_arr[i]);
  }
  new_str[len] = '\0';
  
  printf("%s\n", new_str);
}

void to_lower(char str_arr[], int len){
  char new_str[len + 1];
  
  for(int i = 0; i < len; i++){
    new_str[i] = tolower(str_arr[i]);
  }
  new_str[len] = '\0';
  
  printf("%s\n", new_str);
}

int main(void){
  char str_arr[] = {"HOLA como ESTAS? Todo bien? o estas mal? si, todo bien."};
  int len = strlen(str_arr);
  to_upper(str_arr,len);
  to_lower(str_arr,len);

  return 0;
}