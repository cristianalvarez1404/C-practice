#include <stdio.h>

struct { // => This struct is in the global scope. Hence, it is visible to all the functions.
  char *engine;
} car1, car2;

int main(){
  //structurs tags

  car1.engine = "DDis 190 Engine";
  car2.engine = "1.2 Kappa Dual VTVT";
  printf("%s\n", car1.engine);
  printf("%s\n", car2.engine);

  return 0;
}