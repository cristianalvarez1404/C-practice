#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
  srand(time(NULL) * getpid());

  int rand_val = rand();
  int pid = getpid();

  printf("rand: %d\n", rand_val);
  printf("PID: %d\n", pid);


  return 0;
}