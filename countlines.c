#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#define SERVER_PORT 80
#define MAXLINE 4096
#define SA struct sockaddr

void err_n_die(const char *fmt, ...);

int http_get(char *address, short port){
    int sockfd;
    int sendbytes;
    struct sockaddr_in servaddr;
    char sendline[MAXLINE];

    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        err_n_die("Error while creating the socket!");

    memset(&servaddr, 0, sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(port);

    if(inet_pton(AF_INET, address, &servaddr.sin_addr) <= 0)
        err_n_die("inet_pton error for %s ", address);

    if(connect(sockfd, (SA *)&servaddr, sizeof(servaddr)) < 0)
        err_n_die("connect failed!");

    sprintf(sendline, "GET / HTTP/1.1\r\nConnection: close\r\n\r\n");
    sendbytes = strlen(sendline);

}

void print_usage(char *progname){

}

int main(int argc, char **argv){
    if(argc < 2 || argc > 3) {
        print_usage(argv[0]);
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}




