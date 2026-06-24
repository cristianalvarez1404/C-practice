#include <stdio.h>

int main()
{
  if(fork() == 0){
    printf("I'm childish.\n");
    // execlp("ls", "ls", "-al",NULL);
    execl("/bin/ls", "ls", "-al",NULL);
    printf("after execlp");
  }else {
    printf("I'm old and parental. %d\n", getpid());
  }

  return 0;
}