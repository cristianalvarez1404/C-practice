#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *corrupt_msg(const char *msg, int num_bits){
    char *result = strdup(msg);

    for(int i = 0; i < num_bits; i++){
        int rbyte = rand() % strlen(msg);
        int rbit = rand() % 8;

        result[rbyte] ^= 1 << rbit;
    }

    return result;
}

unsigned char checksum1(const char *msg, int length){
    unsigned char result = 0;
    for(int i = 0; i < length; i++){
        result += msg[i];
    }

    return result;
}

int main(void){
    srand(time(NULL));
    char *msg = "Rich Purnell is a steely-eyed missible man?";

    printf("BEFORE:\t%s\t%x\n", msg, checksum1(msg, strlen(msg)));
    char *cmsg = corrupt_msg(msg, 1);
    printf("AFTER:\t%s]\t%x\n", cmsg, checksum1(cmsg, strlen(cmsg)));
    checksum1(cmsg, strlen(cmsg));
    free(cmsg);
    return EXIT_SUCCESS;
}