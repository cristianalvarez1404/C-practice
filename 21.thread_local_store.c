#include <unistd.h>
#include <pthread.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// thread_local int thread_id;
__thread int thread_id;

char *my_strtok(char *str, const char delim){
  // thread_local static char *previous_state;
  __thread static char *previous_state;
  char *token;

  if(str == NULL)
    str = previous_state;

  //skip up-front delims
  while(*str && *str == delim)
    str++;

  if(!(*str)){
    previous_state = str;
    return NULL;
  }

  //save token start
  token = str;

  //search for delimiter
  for(; *str && (*str != delim); str++);

  if(*str == 0){
    previous_state = str;
  } else {
    *str = '\0';
    previous_state = str + 1;
  }

  return token;
}

#define BUFFER_SIZE 1024
void tokensize_test(void){
  char *string_to_split = malloc(BUFFER_SIZE);
  sprintf(string_to_split, "Parsley,Sage,Rosemary,Thyme");
  
  char *token = my_strtok(string_to_split, ',');
  int token_count = 0;
  while(token){
    // printf("(thread %d) %d: %s\n", gettid(),token_count++, token);
    printf("(thread %d) %d: %-15s\t%p\n", thread_id,token_count++, token, &thread_id);
    token = my_strtok(NULL, ',');
    sleep(1);
  }
}

void *threadfunc (void *arg){
  thread_id = gettid();
  tokensize_test();
  return NULL;
}

int main(){
  pthread_t t1, t2;

  pthread_create(&t1, NULL, threadfunc, NULL);
  pthread_create(&t2, NULL, threadfunc, NULL);

  pthread_join(t1, NULL);
  pthread_join(t2, NULL);
  //tokensize_test();
  return EXIT_SUCCESS;
}