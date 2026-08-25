#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void foo(void); //prototype
void bar(void); //prototype

int main(int argc, char **argv)
{
  foo();
  bar();
  printf("Hello\n");
}

void foo(void)
{
  printf("foo!\n");
}

void bar(void)
{
  printf("bar!\n");
}