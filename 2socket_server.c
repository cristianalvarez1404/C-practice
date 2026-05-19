#include "socketutil.h"
#include <stdbool.h>
#include <unistd.h>
#include <pthread.h>

struct AcceptedSocket
{
    int acceptedSocketFD;
    struct sockaddr_in address;
    int error;
    bool acceptedSuccessfully;
};

struct AcceptedSocket* acceptIncomingConnection(int serverSocketFD);
void receiveAndPrintIncomingData(int socketFD);
void startAcceptingIncomingConnections(int serverSocketFD);
//void acceptNewConnectionAndReceiveAndPrintItsData(int serverSocketFD);
void receiveAndPrintIncomingDataOnSeparateThread(struct AcceptedSocket* clientSocket);
void sendReceivedMessageToTheOtherClients(char *buffer, int socketFD);

struct AcceptedSocket acceptedSockets[10];
int acceptedSocketsCount = 0;

struct AcceptedSocket* acceptIncomingConnection(int serverSocketFD)
{
    struct sockaddr_in clientAddress;
    int clientAddressSize = sizeof(struct sockaddr_in);
    int clientSocketFD = accept(serverSocketFD, &clientAddress, &clientAddressSize);

    struct AcceptedSocket* acceptedSocket = malloc(sizeof(struct AcceptedSocket));
    acceptedSocket->address = clientAddress;
    acceptedSocket->acceptedSocketFD = clientSocketFD;
    acceptedSocket->acceptedSuccessfully = clientSocketFD > 0;

    if(!acceptedSocket->acceptedSuccessfully)
        acceptedSocket->error = clientSocketFD;

    return acceptedSocket;
}

void receiveAndPrintIncomingData(int socketFD)
{
    char buffer[1024];

    while(true)
    {
        ssize_t amountReceived = recv(socketFD, buffer, 1024, 0);
        
        if(amountReceived > 0)
            buffer[amountReceived] = 0;
            printf("Response was %s\n ", buffer);

            sendReceivedMessageToTheOtherClients(buffer, socketFD);
    
        if(amountReceived == 0)
            break;
    }

    close(socketFD);
}

void startAcceptingIncomingConnections(int serverSocketFD)
{
    while(true)
    {
        struct AcceptedSocket* clientSocket = acceptIncomingConnection(serverSocketFD);
        acceptedSockets[acceptedSocketsCount++] = *clientSocket;

        receiveAndPrintIncomingDataOnSeparateThread(clientSocket);    
    }

    //pthread_t id;
    //pthread_create(&id, NULL, acceptNewConnectionAndReceiveAndPrintItsData,serverSocketFD);    
}

void receiveAndPrintIncomingDataOnSeparateThread(struct AcceptedSocket* clientSocket)
{   
    pthread_t id;
    pthread_create(&id, NULL, receiveAndPrintIncomingData, clientSocket->acceptedSocketFD);
}

void sendReceivedMessageToTheOtherClients(char *buffer, int socketFD)
{  
    for(int i = 0; i < acceptedSocketsCount; i++)
        if(acceptedSockets[i].acceptedSocketFD != socketFD)
        {
            send(acceptedSockets[i].acceptedSocketFD,buffer,strlen(buffer),0);
        }
}

int main()
{
    int serverSocketFD = createTCPIpv4Socket();
    struct sockaddr_in *serverAddress = createIPv4Address("127.0.0.1", 2000);

    int result = bind(serverSocketFD, serverAddress, sizeof(*serverAddress));

    if(result == 0)
        printf("Socket was bound succesfully\n");

    int listenResult = listen(serverSocketFD, 10);

    startAcceptingIncomingConnections(serverSocketFD);

    shutdown(serverSocketFD, SHUT_RDWR);

    return 0;
}