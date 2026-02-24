#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_palindrome(char word[],int size_str){
  for(int i = 0; size_str / 2; i++){
    if(word[i] != word[size_str - 1 - i])
      return 0;
  }

  return 1;
}

void print_str(char word[]){
  printf("%s", word);
}

int main(){
  char word[] = "1221";
  int size_str = strlen(word);
  
  if(is_palindrome(word, size_str)){
    printf("The word => ");
    print_str(word);
    printf(" is a palindrome!");
    return 0;
  }
  
  printf("It's not a palindrome :C");
  return 1;
}