#include <stdio.h>
#include <string.h>

typedef struct node {
  int data;
  struct node* next;
} node_t;

int main(){

  // node_t myNode;
  // myNode.data = 0;
  // myNode.next = NULL;
  // memset(&myNode.data,0,sizeof(node_t));

  // printf("mynode.data: %d\n", myNode.data);
  // printf("mynode.next: %d\n", myNode.next);

  /*------------------------------------------------*/

  // char data[27];
  // for(int i = 0; i < 26; i++){
  //   data[i] = 65 + i;
  // }
  // memset(data,65,sizeof(data));
  // data[26] = '\0';
  // printf("%s\n", data);

  /*------------------------------------------------*/

  // char data [27];
  // char dst [13];
  // for(int i = 0; i < 26; i++){
  //   data[i] = 65 + i;
  // }

  // data[26] = '\0';

  // memcpy(dst,data,13);
  // dst[12] = '\0';

  // printf("data: %s\n", data);
  // printf("dst: %s\n", dst);

  /*-------------------------------------------------*/

  // char data[27];
  // char dst[27];
  // for(int i = 0; i < 26; i++){
  //   data[i] = 65 + i;
  // }

  // data[26] = '\0';

  // strcpy(dst, data);

  // printf("data: %s\n", data);
  // printf("dst: %s\n", dst);
  
  /*-----------------------------------------------------*/
  
  char data[27];
  char dst[27];
  for(int i = 0; i < 26; i++){
    data[i] = 65 + i;
  }

  data[26] = '\0';
  memcpy(dst, data, 27);

  memmove(data, data+12, 12);
  
  printf("data: %s\n", data);
  printf("dst: %s\n", dst);

  return 0;
}