#include "common.h"
#include <strings.h>

int main(int argc, char **argv)
{
    int listenfd, connfd, n;
    struct socketaddr_in servaddr;
    uint8_t buff[MAXLINE+1];
    uint8_t recvline[MAXLINE+1];

    if((listenfd = socket(AF_INET, SOCKET_STREAM, 0)) < 0)
    {
        
    }

}