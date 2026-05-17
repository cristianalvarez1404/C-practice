#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
  char s[] = "Hello word";
  char w[] = "word";
  int s_len = strlen(s);
  int w_len = strlen(w);
  int len = s_len - w_len + 1;

  for(int i = 0; i < len ; i++)
  {
    bool occurence = true;
    int count = 0;

    for(int j = 0; j < w_len; j++){
      if(w[j] != s[i + j]){
        occurence = false;
        break;
      }
    }

    if(occurence){
      for(int k = 0; k < w_len; k++){
        s[i + k] = s[w_len + k];
      }
    };
  }

  printf("%s\n",s);

  return 0;
}