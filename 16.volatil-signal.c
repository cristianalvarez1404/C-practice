#include <stdio.h>
#include <signal.h>
#include <stdbool.h>
#include <unistd.h>

volatile bool sigarrived = false;

void handler(int sig) {
  if(sig == SIGINT){
    sigarrived = true;
  }
}

int main(){
  printf("Waiting. Press Ctrl-C to move on.\n");
  signal(SIGINT, handler);
  while(!sigarrived){}
  printf("OK. Moving on.\n");
}