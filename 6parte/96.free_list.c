#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>

#include "object_pool.h"

#define NUM_ROUNDS 100

int main() {
  for(int i = 0; i < NUM_ROUNDS; i++){
    int numobjs = rand() % NUM_ROUNDS;
    Vector3 *vectors[numobjs];
    for(int j = 0; j < numobjs; j++) {
      vectors[j] = BorrowVector3();
    }
    printf("round %d -- got %d vectors\n", i, numobjs);
    for(int j = 0; j < numobjs; j++) {
      ReturnVector3(vectors[j]);
    }
  }
}
