#include "socketutil.h"
#include <stdbool.h>
#include <pthread.h>

void startListenAndPrintMessagesOnNewThread(int socketFD);
void listenAndPrint(int socketFD);

void listenAndPrint(int socketFD)
{
  char buffer[1024];

  while(true)
  {
    ssize_t amountReceived = recv(socketFD, buffer, 1024, 0);

    if(amountReceived > 0)
    {
      buffer[amountReceived] = 0;
      printf("Response was %s\n ",buffer);
    }

    if(amountReceived == 0)
      break;
  }

  close(socketFD);
}

void startListenAndPrintMessagesOnNewThread(int socketFD)
{

  pthread_t id;
  pthread_create(&id, NULL, listenAndPrint, socketFD);
  
}

int main()
{
  int socketFD = createTCPIpv4Socket();

  struct sockaddr_in* address = createIPv4Address("000.0.00.0", 0);

  int result = connect(socketFD, &address, sizeof(*address));

  if(result == 0)
    printf("Connection was succesfull\n");

  char *name = NULL;
  size_t nameSize = 0;
  printf("please enter your name?\n");
  ssize_t nameCount = getline(&name, &nameSize, stdin); 
  name[nameCount-1] = 0;

  char *line = NULL;
  size_t lineSize = 0;
  printf("type and we will send(type exit)...\n");

  startListenAndPrintMessages(socketFD);

  char buffer[1024];
  
  while(true)
  {
    ssize_t charCount = getline(&line, &lineSize, stdin);
    line[charCount-1] = 0;
    
    sprintf(buffer, "%s:$s",name,line);

    if(charCount > 0)
    {
      if(strcmp(line, "exit") == 0)
        break;
      
      ssize_t amountWasSent = send(socketFD, buffer, strlen(buffer), 0);
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
