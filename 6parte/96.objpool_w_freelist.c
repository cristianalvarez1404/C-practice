#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <assert.h>
#include <stdint.h>

#define NUM_OBJECTS 10

typedef struct {
  int x, y, z;
} Vector3;

typedef struct PoolObject{
  //bool allocated;
  Vector3 obj;
  struct PoolObject *next;
} PoolObject;

//declare my object pool
PoolObject object_pool[NUM_OBJECTS] = {{0}};
PoolObject *freelist = NULL;

__attribute__((constructor)) void InitializePool() {
  for(int i = 0; i < NUM_OBJECTS - 1; i++){
    object_pool[i].next = &(object_pool[i + 1]);
  }
  //freelist = object_pool;
  freelist = &(object_pool[0]);
  object_pool[NUM_OBJECTS-1].next = NULL;
}

Vector3 *BorrowVector3(void) {
  if(freelist) {
    //remove the first vector from the free list
    PoolObject *result = freelist;
    freelist = freelist->next;
    return &(result->obj);
  }
  return NULL;
}

// void ReturnVector3(Vector3 *v){
//   for(int i = 0; i < NUM_OBJECTS; i++) {
//     if(&(object_pool[i].obj) == v) {
//       assert(object_pool[i].allocated);
//       object_pool[i].allocated = false;
//       return;
//     }
//   }
//   assert(false); //this is a bug, look into it
// }

void ReturnVector3(Vector3 *v){
  unsigned int i = ((uintptr_t)v - (uintptr_t)object_pool) / sizeof(PoolObject);  
  assert(&(object_pool[i].obj) == v);

  PoolObject *object_to_add = &(object_pool[i]);
  object_to_add->next = freelist;
  freelist = object_to_add;

  return;
}

int main() {
  for(int i = 0; i < 15; i++){
    Vector3 *v1 = BorrowVector3();
    Vector3 *v2 = BorrowVector3();
    printf("got vector %d @ addresses %p %p\n", i, v1, v2);
    ReturnVector3(v1);
    ReturnVector3(v2);
  }
}
