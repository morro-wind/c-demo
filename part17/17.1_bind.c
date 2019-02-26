#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 5678                       /*定義一個表示端口的常量*/

main() {
    int sockfd, newsockfd, fd;          /*定義相關的變量*/
    struct sockaddr_in addr;
    int addr_len = sizeof(struct sockaddr_in);
    fd_set myreadfds;
    char msgbuffer[256];

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket");
        exit(1);
    }
    else {
        printf("socket created .\n");
        printf("socked id: %d \n", sockfd);
    }

    bzero(&addr, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(sockfd, &addr, sizeof(addr)) < 0) {
        perror("connect");
        exit(1);
    }
    else {
        printf("connected.\n");
        printf("local port: %d\n", PORT);
    }
}
