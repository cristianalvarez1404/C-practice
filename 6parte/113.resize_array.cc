#include <iostream>

size_t resize1(int **array, size_t oldsize, size_t amount) {
  size_t new_size = oldsize + amount;
  int *new_array = new int[new_size];

  memcpy(new_array, array, oldsize * sizeof(int));
  delete [] *array;
  *array = new_array;
  return new_size;
}

size_t resize2(int **array, size_t oldsize, size_t amount) {
  size_t new_size = oldsize + amount;
  *array = (int*)realloc(*array, new_size * sizeof(int));
  return new_size;
}

int main() {
  size_t arrsize = 50;
  int *myarray1 = new int[arrsize];
  int *myarray2 = (int*) malloc(sizeof(int) * arrsize);
  int *myarray3 = (int*) malloc(sizeof(int) * arrsize);

  printf("B:%p, %lu, A:%p\n", myarray1, resize1(&myarray1, arrsize, 5), myarray1);
  printf("B:%p, %lu, A:%p\n", myarray2, resize2(&myarray2, arrsize, 5), myarray2);
  
  for(int i = 0; i < 50; i++) {
    arrsize = resize2(&myarray3, arrsize, 1);
    printf("A:%p, S:%lu\n", myarray3, arrsize);
  }

  delete [] myarray1;
  free(myarray2);
  free(myarray3);
}
