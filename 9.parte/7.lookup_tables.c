#include <stdio.h>

enum foo {
  foo_2 = 0,
  foo_3,
  foo_4,
};

static int squares[] = {
  4,
  9,
  16
};

static char case_convert[] = {
  'A',
  'B',
  'C'
};

//designated initializer
static int squares[] = {
  ['A'] = 4,
  ['B'] = 9,
  ['C'] = 16,
};

int main(void)
{
  printf("%d\n", squares[foo_2]);
  printf("%d\n", squares[foo_3]);
  printf("%d\n", squares[foo_4]);

  printf("%c\n", case_convert[foo_2]);
  printf("%c\n", case_convert[foo_3]);
  printf("%c\n", case_convert[foo_4]);
}