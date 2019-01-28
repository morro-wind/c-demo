#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <string.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]) {
    struct hostent *host;
    char hostname[30];

    struct in_addr ip;
    struct in_addr in;
    struct sockaddr_in addr_in;
    extern int h_errno;

    printf("Please input a Domain:\n");
    scanf("%s", hostname);

    if ((host = gethostbyname(hostname)) != NULL) {
        memcpy(&addr_in.sin_addr.s_addr, host -> h_addr,4);
        in.s_addr = addr_in.sin_addr.s_addr;
        ip.s_addr = inet_ntoa(in);
        printf("Domain name; %s \n", hostname);
        printf("IP length: %d\n", host -> h_length);
        printf("IPaddr: %s\n",inet_ntoa(*((struct in_addr *)host->h_addr)));
        printf("Type: %d\n", host -> h_addrtype);
    }
    else {
        printf("Domain name: %s\n", hostname);
        printf("error: %d\n", h_errno);
        printf("%s\n", hstrerror(h_errno));
    }
}
