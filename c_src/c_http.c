#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#include <netinet/tcp.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>


void copy(char *string, struct in_addr *pAddr, int length);

int socket_connect(char *host, in_port_t port) {
    struct hostent *hp;
    struct sockaddr_in addr;
    int on = 1, sock;

    if((hp = gethostbyname(host)) == NULL){
        herror("gethostbyname");
        exit(1);
    }

//    copy(hp->h_addr, &addr.sin_addr, hp->h_length);


}

//void copy(char *string, struct in_addr *pAddr, int length) {
//    copy(hp->h_addr, &addr.sin_addr, hp->h_length);
//}
