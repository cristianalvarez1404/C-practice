#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int handle_redirect(char *args[]);

int main(int argc, char *argv[])
{
  int interactive = 1;

  if(argc > 1)
  {
    // First arg is the name of the script
    if(freopen(argv[1], "r", stdin) == NULL)
    {
      fprintf(stderr, "Can't read from script file %s\n", argv[1]);
      fprintf(stderr, "Exiting.\n");
      exit(1);
    }
    interactive = 0;
  }

  while(1)
  {
    //String to hold input buffer
    char buf[1024];

    // Prompt
    if(interactive) printf("$ ");

    // Get input from keyboard
    if(fgets(buf, 1024, stdin) == NULL) break;

    // Trim newline
    char *nl = strchr(buf, '\n');
    if(nl) *nl = '\0';

    // Remove comments
    char *hash = strchr(buf, '#');
    if(hash) *hash = '\0';

    // Split buf into args
    char *args[20];
    int nargs = 0;

    args[nargs] = strtok(buf, " ");
    while(args[nargs] != NULL)
    {
      args[++nargs] = strtok(NULL, " ");
    }

    if(args[0] == NULL) continue;
    if(strcmp(args[0], "exit") == 0) exit(0);

    // Fork and exec
    pid_t pid = fork();

    if(pid > 0)
    {
      // We are the parent
      wait(NULL);
    } 
    else
    {
      // We are the child
      if(handle_redirect(args) == -1){
        fprintf(stderr, "Could not redirect\n");
        exit(1);
      }

      execlp(args[0], args);
      
      // Something went wrong with exec
      fprintf(stderr, "Could not exec %s\n", buf);
    }
  }
}

// Handle redirect stdout
// Return 1 if successful
// Return 0 is no redirect was needed
// Return -1 if something broke
int handle_redirect(char *args[]) {
  for(int i = 0; args[i] != NULL; i++){
    if(strcmp(args[i], ">") == 0)
    {
      // Assume next arg is the file to write to
      if(freopen(args[i + 1], "w", stdout) == NULL) return -1;

      if(stdout == NULL) return -1;

      // Terminate args at the ">" symbol
      args[i] = NULL;

      return 1;
    }
  }
  return 0;
}