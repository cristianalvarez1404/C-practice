#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define ResultGreen 0
#define ResultYellow 2
#define ResultRed 4

typedef char Result;
//typedef char[5] Results;

bool isin(char, char*);
void Example_print_results(Result*);
Result *cw(char*, char*);
Result cc(char, int, char*);
int main(int, char**);

void Example_print_results(Result *res){
  int i;

  for(i=0; i < 5; i++){
    switch(res[i]){
      case ResultGreen:
        printf("%s\n", "Green");
        break;
      case ResultYellow:
        printf("%s\n", "Yellow");
        break;
      case ResultRed:
        printf("%s\n", "Red");
        break;
      default:
        printf("Unknown: %d\n", res[i]);
    }
  }
  return;
}

bool isin(char c, char *str){
  bool ret;
  int i, size;
  
  ret = false;
  size = strlen(str);

  for(i = 0; i < size; i++){
    if(str[i] == c){
      ret = true;
      break;
    }
  }

  return ret;
}

Result cc(char guess, int idx, char *word){
  char correct;

  correct = word[idx];
  if(guess == correct)
    return ResultGreen;
  else if(isin(guess, word))
    return ResultYellow;

  return ResultRed;
}

Result *cw(char *guess, char *word){
  static Result res[5];
  int i;

  for(i = 0; i < 5; i++){
    res[i] = cc(guess[i],i, word);
  }

  return res;
}

int main(int argc, char *argv[]){
  char *correct, *guess;
  Result *res;

  if(argc < 3){
    fprintf(stderr, "Usage: %s CORRECTWORD GUESSWORD\n", argv[0]);
    return -1;
  }

  correct = argv[1];
  guess = argv[2];

  res = cw(correct, guess);
  Example_print_results(res);

  return 0;
}

