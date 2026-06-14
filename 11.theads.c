#include <pthreads.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void* myturn(void *arg){
  // int *iptr = (int *)arg;
  int *iptr = (int *)malloc(sizeof(int));
  *iptr = 5;

  for(int i = 0; i < 8; i++)
  {
    sleep(1);
    printf("My Turn! %d %d\n", i, *iptr);
    (*iptr)++;
  }
  return iptr;
}

void yourturn(){
  for(int i = 0; i < 3; i++)
  {
    sleep(2);
    printf("Your Turn! %d\n", i);
  }
}

int main(){
  pthread_t newthread;
  //int v = 5;
  int *result;

  // pthread_create(&newthread, NULL, myturn, &v);
  pthread_create(&newthread, NULL, myturn, NULL);
   
  //myturn() => Another task
  yourturn()

  // wait until the thread is done before we exit.
  pthread_join(newthread, &result);
  printf("thread's done: *result=%d\n", *result);
}