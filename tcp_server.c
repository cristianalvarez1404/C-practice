#include "common.h"
#include <strings.h>

int main(int argc, char **argv)
{
    int listenfd, connfd, n;
    struct socketaddr_in servaddr;
    uint8_t buff[MAXLINE+1];
    uint8_t recvline[MAXLINE+1];

    if((listenfd = socket(AF_INET, SOCKET_STREAM, 0)) < 0)
        err_n_die("socket error.");

    //Address
    bzero(&servaddr, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    server_sin_port = htons(SERVER_PORT);

    //Listen and bind
    if((bind(listenfd, (SA *) &servaddr, sizeof(servaddr))) < 0)
        err_n_die("bind error.");

    if((listen(listenfd, 10)) < 0)
        err_n_die("listen error.");

    for(;;){
        struct socketaddr_in addr;
        socklen_t addr_len;

        //accepts blocks util an incoming connection arrives
        //it returns a "file descriptor" to the connection
        printf("waiting for a connection on port %d\n", SERVER_PORT);
        fflush(stdout);
        connfd = accept(listenfd, (SA *) NULL, NULL);

        memset(recvline, 0, MAXLINE);

        while((n = read(connfd, recvline, MAXLINE - 1)) > 0)
        {
            fprintf(stdout, "\n%s\n\n%s", bin2hex(recvline, n), recvline);

            if(recvline[n-1] == '\n') {
                break;
            }
            memset(recvline, 0, MAXLINE);
        }

        if(n < 0)
            err_n_die("read error");

        snprintf((char*)buff, sizeof(buff), "HTTP/1.0 200 OK\r\n\r\nHello");

        write(connfd, (char*)buff, strlen((char *)buff));
        close(connfd);
    }
}