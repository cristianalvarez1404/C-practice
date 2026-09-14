#include <stdio.h>
#include <stdio.h>

int main(){

  int data[] = {1,2,3,4,5,6};
  int data2[] = {1,2,3,4,5,6,7,8,9,10};
  //int* data3 = (int*)malloc(sizeof(int) * 6);

  printf("sizeof(int): %lu\n", sizeof(short));
  printf("sizeof(int): %lu\n", sizeof(int));

  for(size_t i = 0; i < sizeof(data) / sizeof(int); i++){
    //printf("%d\n", data[i]);
    printf("%d\n", *(data+i));
    printf("%p\n", (data+i));
  }

  int diff = data2 - data;
  printf("diff: %d\n", diff);
}