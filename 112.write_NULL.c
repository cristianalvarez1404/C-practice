#include <sys/mman.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  uint8_t *ip = mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, 0, 0);

  if(ip == NULL) {
    printf("Gonna write to NULL!");
    *ip = 23;
    printf("Nailed it!");
  } else {
    printf("mmap gave me address %p\n", ip);
  }
}