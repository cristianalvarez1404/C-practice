#include <stdio.h>

#define NUM_LOOPS 50

struct counters {
  unsigned int little: 2;
  unsigned int medium:4;
  unsigned int large:6;
}__attribute__((packed));

int main() {
  struct counters counts;
  counts.little = 0;
  counts.medium = 0;
  counts.large = 0;
  
  for(int i = 0; i < NUM_LOOPS; i++){
    counts.little++;
    counts.medium++;
    counts.large++;
    printf("%u, %u, %u\n", counts.little, counts.medium, counts.large);
  }

  printf("Sizeof counts = %lu\n", sizeof(counts));
}
