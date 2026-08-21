#include <stdio.h>
#include <stdlib.h>

int myfunction(int counter) {
  int result = 5;
  printf("myfunction %p %p %p\n", &result, &counter, __builtin_frame_address(0));
  myfunction(counter+1);
  return 0;
}

int main() {
  int i;
  printf("main %p %p\n", &i, __builtin_frame_address(0));
  
  myfunction(4);
  return 0;
}