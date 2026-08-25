#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(int argc, char **argv, char **envp) {
  //4 option
  putenv("PASSCODE1=123");
  setenv("PASSCODE2","456",1);

  // 3 option
  for(int i = 0; environ[i] != NULL; i++){
    printf("%d: %s\n", i, environ[i]);
  }

  // 2 option
  for(int i = 0; envp[i] != NULL; i++){
    printf("%d: %s\n", i, envp[i]);
  }

  // 1 option
  char *value;

  value = getenv("HOME");
  printf("HOME= %s\n", value);
  value = getenv("USER");
  printf("USER= %s\n", value);
  value = getenv("PASSWORD");
  printf("PASSWORD = %s\n", value);
}