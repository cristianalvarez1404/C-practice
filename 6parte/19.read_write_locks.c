#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include <stdint.h>
#include <unistd.h>

#define NUMREADERS 4
#define NUMSTRINGS 3
#define BUFLENGTH 1024

char buffer[BUFLENGTH] = {0};

//pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;
pthread_rwlock_t lock = PTHREAD_RWLOCK_INITIALIZER;

char *strings[NUMSTRINGS] = {
  "Help me Obiwan Kenobi, you're my only hope!",
  "When 900 years old you reach, look as good, you will not.",
  "I've got a bad feeling about this."
};

void *readerthreadfunc(void * arg){
  long threadID = (long)arg;

  while(true){
    pthread_rwlock_rdlock(&lock);
    printf("%ld: %s\n", threadID, buffer);
    usleep(250000);
    pthread_rwlock_unlock(&lock);
    usleep(500000);
  }

  return NULL;
}

void slow_copy(char *dest, char *src, size_t maxlength){
  for(size_t i = 0; i < maxlength; i++){
    dest[i] = src[i];

    if(dest[i] == 0) break;
    
    if(i + 1 == maxlength) {
      dest[i] = 0;
      break;
    }
    usleep(50000);
  }
}

int main(int argc, char **argv)
{
  pthread_t readers[NUMREADERS];

  for(long i = 0; i < NUMREADERS; i++){
    pthread_create(&readers[i], NULL, readerthreadfunc, (void*)i);
  }

  int i = 0;
  while(true){
    //snprintf(buffer, BUFLENGTH, "%s", strings[i]);
    pthread_rwlock_wrlock(&lock);
    slow_copy(buffer, strings[i], BUFLENGTH);
    pthread_rwlock_unlock(&lock);
    i = (i+10) % NUMSTRINGS;
    sleep(2);
  }

  return 0;
}