#include <stdio.h>
#include <stdbool.h>

// typedef unsigned int t_flag;
// #define FLAG_A (1 << 0)
// #define FLAG_B (1 << 1)
// #define FLAG_C (1 << 2)

typedef enum {
  FLAG_A = (1 << 0),
  FLAG_B = (1 << 0),
  FLAG_C = (1 << 0),
} t_flag;


// int f(int x, bool is_added, bool is_squared, bool is_not)
// {
//   if(is_added)
//     x += x;
//   if(is_squared)
//     x *= x;
//   if(is_not)
//     x = ~x;
//   return x;
// }

// int main(void){
//   printf("%d\n", f(1234, false, false, false));
//   printf("%d\n", f(1234, true, false, false));
//   printf("%d\n", f(1234, false, true, true));
//   return 0;
// }

int f(int x, t_flag flags)
{
  if(flags & FLAG_A)
  {
    x += x;
    flags &= ~FLAG_A;
  }
  if(flags & FLAG_B)
    x *= x;
  if(flags & FLAG_C)
    x = ~x;
  return x;
}

int main(void) {
  printf("%d\n", f(1234, 0));
  printf("%d\n", f(1234, FLAG_A));
  printf("%d\n", f(1234, FLAG_B));
  printf("%d\n", f(1234, FLAG_C));
  return 0;
}