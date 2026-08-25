#include <sys/types.h>
#include <sys/mman.h>
#include <sys/errno.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdint.h>
#include <assert.h>
#include <string.h>

// int ismapped(const void *ptr, int bytes) {
//   if(ptr == NULL) {
//     return 0;
//   }

//   //create a pipe - doesn't go anywhere
//   int fd[2];
//   int valid = 1;

//   pipe(fd);
//   if(write(fd[1], ptr, bytes) < 0) {
//     if(errno == EFAULT)
//       valid = 0;
//   }
//   close(fd[0]);
//   close(fd[1]);
//   return valid;
// }

int ismapped(const void *ptr, int bytes, bool write) {
  pid_t child;

  child = fork();
  if(child == 0){
    if(write) {
      memset(ptr, 0, bytes);
    } else {
      void *data = malloc(bytes);
      memcpy(data, ptr, bytes);
    }

    exit(EXIT_SUCCESS);
  }

  int status;
  pid_t result = waitpid(child, &status, 0);
  assert(result >= 0);

  return (status == EXIT_SUCCESS);
}

void testptr(void *p, int bytes, char *name) {
  printf("%s:\t%d\t%p\n", name, ismapped(p, bytes, true), p);
}

int main() {
  int *junk = NULL;
  int *junk2 = (int*)((uintptr_t)0x352342524a);
  int *p = malloc(50);
  int x = 5;
  int *px = &x;

  testptr(junk, 1, "junk");
  testptr(junk2, 1, "junk2");
  testptr(px, sizeof(int), "px");
  testptr(p, 50, "p");

  //*junk = 567;
}