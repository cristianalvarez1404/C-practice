#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, char *argv[]){

  if(argc != 2){
    printf("Usage: %s <hostname>\n", argv[0]);
    return EXIT_FAILURE;
  }

  const char *hostname = argv[1];

  struct addrinfo hint;
  struct addrinfo *result;

  memset(&hint, 0, sizeof(hint));
  //hint.ai_family = AF_INET; // IPV4 addresses
  //hint.ai_family = AF_INET6; //IPV6 addresses
  hint.ai_family = AF_UNSPEC;
  hint.ai_socktype = SOCK_STREAM; // TCP connection


  int status = getaddrinfo(hostname, NULL, &hint, &result);
  if(status){
    printf("getaddrinfo failed!");
    return EXIT_FAILURE;
  }

  struct addrinfo *tmp = result;
  while(tmp != NULL){

    printf("Entry:\n");
    printf("\tType: %i\n", tmp->ai_socktype);
    printf("\tFamily: %i\n", tmp->ai_family);

    char address_string[INET6_ADDRSTRLEN];
    void *addr;

    if(tmp->ai_family == AF_INET) {
      //v4
      addr = &((struct sockaddr_in*)tmp->ai_addr)->sin_addr;
    }else {
      //v6
      addr = &((struct sockaddr_in*)tmp->ai_addr)->sin6_addr;
    }

    inet_ntop(tmp->ai_family, addr, address_string, INET6_ADDRSTRLEN);

    printf("\tAddress: %s\n", address_string);    
    tmp = tmp->ai_next;
  }

  freeaddrinfo(result);

  return EXIT_SUCCESS;
}