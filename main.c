#include <stdio.h>
//#include <sys/types.h>
//#include <sys/socket.h>

#define IP "1" /* google*/
#define PORT 80 /* http */

int main(){

  // A socket is a IP connection, so you connect a server somewhere on the internet
  // in the local network and you send data.
  //TCP connection on port 80 (http protocol) whitch is used to clear text communication on the web.
   
  int s;
  sock_addr_in sock;

  s = socket(AF_INET, SOCK_STREAM, 0);
  

  return 0;
}