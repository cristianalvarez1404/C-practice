#include <sys/socket.h>
#include <sys/types.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <stdarg.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/time.h>
#include <sys/ioctl.h>
#include <netdb.h>

//Preprocessors macros for readability

//standard HTTP port
#define SERVER_PORT 80

//buffer length - where data goes
#define MAXLINE 4096

//less wordy types
#define SA struct sockaddr

//handle errors!
void err_n_die(const char *fmt, ...);

int main(int argc, char **argv)
{
    // local variables
    int sockfd, n;
    int sendbytes;
    struct sockeaddr_in servaddr;
    char sendline[MAXLINE];
    char recvline[MAXLINE];

    // usage check
    if(argc != 2)
        err_n_die("usage: %s <server address>", argv[0]);

    //create socket
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        err_n_die("Error while creating the socket!");

    bzero(&servaddr, sizeof(struct sockaddr_in));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(SERVER_PORT);

    //translate address
    if(inet_pton(AF_INET, argv[1], &servaddr.sin_addr) <= 0)
        err_n_die("inet_pton error for %s ", argv[1]);
 
    // connect to the server
    if(connect(sockfd, (SA *) &servaddr, sizeof(servaddr)) < 0)
        err_n_die("connect failed!");
    
    // We're conencted prepare the message
    sprintf(sendline, "GET / HTTP/1.1\r\n\r\n");
    sendbytes = strlen(sendline);

    if(write(socket, sendline, sendbytes) != sendbytes)
        err_n_die("write error");
    
    memset(recvline, 0, MAXLINE);

    while((n = read(sockfd, recvline, MAXLINE - 1)) > 0)
    {
        printf("%s", recvline);
    }
    if(n < 0)
        err_n_die("read error");

    exit(0);
}


void err_n_die(const char*fmt, ...)
{
    int errno_save;
    va_list ap;

    errno_save = errno;

    //print out the fmt+args to standard out
    va_start(ap, fmt);
    vfprintf(stdout, fmt, ap);
    fprintf(stdout,"\n");
    fflush(stdout);

    //print out error message is errno was set.
    if(errno_save != 0)
    {
        fprintf(stdout, "(errno = %d) : %s\n", errno_save, strerror(errno_save));
        fprintf(stdout,"\n");
        fflush(stdout);
    }
    va_end(ap);

    exit(1);
}






