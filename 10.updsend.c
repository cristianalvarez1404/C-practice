#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>

int main(int argc, char *argv[]){
  if(argc != 4) {
    printf("Usage: %s <peer_ip> <peer_port> <message>\n", argv[0]);
    return EXIT_FAILURE;
  }

  //get some information about our peer from our args
  const char *peer_ip = argv[1];
  int peer_port = atoi(argv[2]);
  const char *message = argv[3];
  
  struct sockeaddr_in peer_addr = {
    .sinfamily = AF_INET, 
    .sin_port = htons(peer_port)
  };

  if(inet_pton(AF_INET, peer_ip, &(peer_addr.sin_addr)) <= 0){
    printf("Something wrong with the IP address!");
    return EXIT_FAILURE;
  }

  int upd_socket = socket(AF_INET, SOCK_DGRAM, 0);
  if(upd_socket < 0){
    perror("Sorry, couldn't create the socket.");
    return EXIT_FAILURE;
  }

  if(sendto(udp_socket, message, strlen(message) + 1, 0, (struct sockeaddr_in *)&peer_addr, sizeof(peer_addr)) < 0){
    perror("Failed to t send message.");
    close(upd_socket);
    return EXIT_FAILURE;
  };

  printf("Sent \"%s\" to %s:%d\n", message, peer_ip, peer_port);
  close(upd_socket);

  return EXIT_SUCCESS;
}