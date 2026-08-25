#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <signal.h>

void no_more_zombies(){
  struct sigaction sa;
  memset(&sa, 0, sizeof(sigaction))
  sa.sa_handler = SIG_DFL;
  sa.sa_flags = SA_NOCLDWAIT;

  sigaction(SIGCHLD, &sa, NULL);
}

int main(int argc, char **argv)
{
  no_more_zombies();

  while(true){
    if(fork() == 0){
      printf("Zoombie process! (%d)\n", getpid());
      exit(EXIT_SUCCESS);
    }
    sleep(1);
  }
}