#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_string_length(char *str) {
  int offset = 0;
  while(str[offset] != 0) {
    offset++;
  }
  return offset;
}

void copy_string(char *from, char *to) {
  int offset = 0;
  while(from[offset] != 0){
    to[offset] = from[offset];
    offset++;
  }
  to[offset] = 0;
}

void reverse0(char *str) {
  int length = strlen(str);
  for(int i = 0; i < length / 2; i++) {
    char temp = str[i];
    str[i] = str[length - 1 - i];
    str[length - 1 - i] = temp;
  }
}

void reverse1(char *str) {
  int length = strlen(str);
  for(int i = 0, j = length - 1; i < j; i++, j--){
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

void reverse2(const char *s1, char *s2, size_t len){
  int i, j;
  for(i = len - 1, j = 0; i >= 0; i--, j++)
    s2[j] = s1[i];
  s2[j] = '\0';
}

void reverse3(char *str) {
  char *end = str + strlen(str) - 1;

  while(str < end){
    char temp = *str;
    *str = *end;
    *end = temp;
    str++;
    end--;
  }
}

void reverse3a(char *str) {
  for(char *end = str + strlen(str) - 1; str < end; str++, end--){
    char temp = *str;
    *str = *end;
    *end = temp;
  }
}

void reverse4(char *str, int length){
  if(length <= 1) return;

  char tmp = str[0];
  str[0] = str[length - 1];
  str[length - 1] = tmp;
  reverse4(str+1, length-2);
}

char *reverse5(const char *str) {
  int length = strlen(str);
  char *result = malloc(length + 1);
  
  for(int i = 0; i < length; i++){
    result[i] = str[length-1-i];
  }
  result[length] = 0;
  return result;
}

char *reverse6(const char *str){
  char *result = malloc(strlen(str)+1);

  strcpy(result, str);
  reverse3(result);
  return result;
}

char *reverse7(const char *str) {
  int length = strlen(str);
  char *result = malloc(length+1);
  memset(result, 0, length);
  int leftToSwap = length/2;

  while(leftToSwap){
    int ridx = rand() % (length / 2);
    if(result[ridx] == 0){
      result[ridx] = str[length-1-ridx];
      result[length-1-ridx] = str[ridx];
      leftToSwap--;
    }
  }
  result[length] = 0;
  return result;
}