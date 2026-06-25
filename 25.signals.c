#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void handler(int num) {
  write(STDOUT_FILENO, "I Won't die\n", 13);
}

void seghandler(int num) {
  write(STDOUT_FILENO, "Seg Fault!\n", 10);
}

int main()
{
  int *p = NULL;
  signal(SIGINT, handler);
  signal(SIGTERM, handler);
  signal(SIGKILL, handler);
  signal(SIGSEGV, seghandler);

  *p = 45;
  while(1)
  {
    printf("Wasting your cicle. %d\n", getpid());
    sleep(1);
  }
}