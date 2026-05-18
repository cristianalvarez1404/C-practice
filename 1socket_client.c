#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <malloc.h>

struct sockaddr_in* createIPv4Address(char *ip, int port);
int createTCPIpv4Socket();

int main()
{
  int socketFD = createTCPIpv4Socket();

  struct sockaddr_in* address = createIPv4Address("000.0.00.0", 0);

  int result = connect(socketFD, &address, sizeof(*address));

  if(result == 0)
    printf("Connection was succesfull\n");

  char* message;
  message = "GET \\ HTTP/1.1\r\nHost:google.com\r\n\r\n";
  send(socketFD, message, strlen(message), 0);

  char buffer[1024];
  recv(socketFD, buffer, sizeof buffer, 0);

  printf("Response was %s\n ", buffer);

  return 0;
}

struct sockaddr_in* createIPv4Address(char *ip, int port)
{
  //char* ip = "000.0.00.0"; 
  struct sockaddr_in* address = malloc(sizeof(struct sockaddr_in));
  address->sin_family = AF_INET;
  address->sin_port = htons(port);
  inet_pton(AF_INET, ip, &address->sin_addr.s_addr);
  return address;
}

int createTCPIpv4Socket()
{
  return socket(AF_INET,SOCK_STREAM,0);
}


