#include <stdio.h>
#include <unistd.h>

int x = 0;

int main() {
  for(int i = 0; i < 5; i++){
    x++;
    printf("x=%d @ %p\n", x, &x);
    sleep(1);
  }
}