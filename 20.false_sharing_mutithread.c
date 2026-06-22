#define _GNU_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <pthread.h>
#include <stdint.h>
#include <stdalign.h>
#include <stdlib.h>

#define THRESHOLD (10000000000ULL)

void *threadfunc(void *arg) {
  uint64_t *counter = (uint64_t*)arg;
  
  while(*counter < THRESHOLD){
    (*counter)++;
  }
  return NULL;
}

int main(){

  uint64_t alignas(64) counter1 = 0;
  //char dummy_array[100] = {0};
  uint64_t alignas(64) counter2 = 0;

  //works on Linux, not portable
  long cache_line_size = sysconf(_SC_LEVEL1_DCACHE_LINESIZE);

  pthread_t t1, t2;
  pthread_create(&t1, NULL, threadfunc, &counter1);
  pthread_create(&t1, NULL, threadfunc, &counter2);

  pthread_join(t1, NULL);
  pthread_join(t2, NULL);

  printf("counter1 = %lu\n", counter1);
  printf("counter2 = %lu\n", counter2);

  return EXIT_SUCCESS;
}