#include "socketutil.h"
#include <stdbool.h>

int main()
{
  int socketFD = createTCPIpv4Socket();

  struct sockaddr_in* address = createIPv4Address("000.0.00.0", 0);

  int result = connect(socketFD, &address, sizeof(*address));

  if(result == 0)
    printf("Connection was succesfull\n");

  char *line = NULL;
  size_t lineSize = 0;
  printf("type and we will send(type exit)...\n");

  while(true)
  {
    ssize_t charCount = getline(&line, &lineSize, stdin);
    
    if(charCount > 0)
    {
      if(strcmp(line, "exit\n") == 0)
        break;
      
      ssize_t amountWasSent = send(socketFD, line, charCount, 0);
    }
  }

  close(socketFD);
  /*
  char* message;
  message = "GET \\ HTTP/1.1\r\nHost:google.com\r\n\r\n";
  

  char buffer[1024];
  recv(socketFD, buffer, sizeof buffer, 0);

  printf("Response was %s\n ", buffer);  
  */
  return 0;
}
