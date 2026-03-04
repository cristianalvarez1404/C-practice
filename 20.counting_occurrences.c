#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
  char str_arr[] = "mundo mundo";
  char word[] = "mundo";

  int len = strlen(str_arr);
  int len_word = strlen(word);
  int total_corrurrence = 0;
  
  bool has_occurence = false; 
  int index = 0;

  while(index < len && has_occurence){
    for(int i = 0; i < len_word; i++){
      for(int y = index; y < len; y++){
        if(str_arr[y] == ' ' && has_occurence){
          goto fin;
        }

        if(str_arr[y] == ' ' && !has_occurence){
          continue;
        }

        if((has_occurence && str_arr[y] != word[i])){
          has_occurence = false;
          goto fin;
        }

        if(str_arr[y] == word[i]){
          has_occurence = true;
          index = y + 1;
          break;
        }

        goto fin;
      }
    }
    total_corrurrence++;
  }

  fin:
  printf("Total corrunces => %d\n", total_corrurrence);

  if(total_corrurrence <= 0)
    printf("Sorry, the word does not exist in the string!");
  else
    printf("Total concurrences: %d", total_corrurrence);

  return 0;
}