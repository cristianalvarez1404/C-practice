#include <stdio.h>
#include <assert.h>

//Declarations of our functions
int square(int arg);
void hello(void);
void countdown(unsigned int n);

int main() {
  int result = square(7);
  printf("square(7)=%d\n", result);
  hello();
  countdown(10);
  return 0;
}

//Definitions of our functions
int square(int arg) {
  return arg * arg;
}

void hello(void){
  puts("Hello\n");
}

//recursion
void countdown(unsigned int n) {
  assert(n >= 0 && "n was not greater than 0");
  // base case
  if(n < 0) {
    return;
  }
  printf("%ui\n", n);
  return countdown(n - 1);
}