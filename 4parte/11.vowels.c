#include <stdio.h>
#include <string.h>
#include <ctype.h>

int total_vowels(char arr_str[],int len_str){
  char vowels[6] = {'a','e','i','o','u'};
  int vowels_len = sizeof(vowels) / sizeof(char); 
  int t_vowels = 0;

  for(int y = 0; y < vowels_len; y++){
    for(int i = 0; i < len_str; i++){
      if(tolower(arr_str[i]) == vowels[y]){
        t_vowels++;
      }
    }
  }
  return t_vowels;
}

int main(){
  char arr_str[] = {"hola mundo que tal todo bien. siiII"};
  int str_len = strlen(arr_str);
  int t_vowels = total_vowels(arr_str,str_len); 

  printf("Total vowels => %d",t_vowels);
  return 0;
}