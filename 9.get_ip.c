#include <stdlib.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <string.h>

int main(int argc, char *argv[]) {

    if(argc != 2){
        printf("Usage: %s <hostname>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char * hostname = argv[1];

    struct addrinfo *hint;
    struct addrinfo *result;

    memset(&hint, 0, sizeof(hint));
    //hint.ai_family = AF_INET;   //IPV4 addresses
    //hint.ai_family = AF_INET6;  //IPV6 addresses
    hint.ai_family = AF_UNSPEC;   //Unspected => Take whatever
    //hint.ai_socktype = SOCK_STREAM; //TCP connection

    int status = getaddrinfo(hostname,NULL, &hint, &result);
    if(status){
        
    }

    return EXIT_SUCCESS;
}