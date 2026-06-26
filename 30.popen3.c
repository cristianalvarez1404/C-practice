#include <stdio.h>
#include <unistd.h>
#include <paths.h>
#include <stdlib.h>
#include "popen3.h"

void cleanup(int pipe_pair[2]){
  close(pipe_pair[0]);
  close(pipe_pair[1]);
}

stdpipes popen3(const char *command)
{
  stdpipes result = {.out = NULL, .in = NULL, .err = NULL};

  int sout_pair[2];
  int serr_pair[2];
  int sin_pair[2];
  pid_t pid;

  if(pipe(sout_pair) < 0){
    return result;
  }

  if(pipe(serr_pair) < 0){
    cleanup(sout_pair[0]);
    return result;
  }
  
  if(pipe(sin_pair) < 0){
    cleanup(sout_pair);
    cleanup(serr_pair);
    return result;
  }

  pid = vfork(); //clone the process

  if(pid < 0){
    //ERROR !
    cleanup(sout_pair);
    cleanup(serr_pair);
    cleanup(sin_pair);
    return result;
  }

  if(pid == 0){
    //CHILD PROCESS
    dup2(sout_pair[1], STDOUT_FILENO);
    cleanup(sout_pair);
    
    dup2(serr_pair[1], STDERR_FILENO);
    cleanup(serr_pair);
    
    dup2(sin_pair[0], STDIN_FILENO);
    cleanup(sin_pair);
    
    execl("/bin/sh", "sh", "-c", command, NULL);
    exit(127);
  }

  //PARENT
  result.out = fdopen(sout_pair[0], "r");
  close(sout_pair[1]);
 
  result.err = fdopen(serr_pair[0], "r");
  close(serr_pair[1]);
  
  result.in = fdopen(sin_pair[1], "r");
  close(sin_pair[0]);

  return result;
}