#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <dlfcn.h>

#define _GNU_SOURCE

typedef void *(*malloc_like_function)(size_t);

void *malloc(size_t size){
  if(size > 1024) {
    *((volatile char*)0) = 0; //seg fault
  }
  malloc_like_function sysmalloc = (malloc_like_function)dlsym(RTLD_NEXT, "malloc");
  return sysmalloc(size);
}

