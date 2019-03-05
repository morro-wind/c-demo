#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

#define PORT 6677                           /*包含頭文件*/

main() {
    int sockfd, newsockfd, fd;              /*定義相關的變量*/
    struct sockaddr_in addr;
    int addr_len = sizeof(struct sockaddr_in);
    fd_set myreadfds;
    char msgbuffer[256];
    char msg[] = "This is the message from server.Connected.\n";

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0 )) < 0) { /*建立一個socket*/
        perror("socket");
        exit(1);
    }
    else {
        printf("socket created. \n");       /*socket 建立成功*/
        printf("socked id : %d\n", sockfd);
    }

    bzero(&addr, sizeof(addr));             /*清空zero 所在的內存*/
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(sockfd, &addr, sizeof(addr)) < 0) {    /*綁定IP 端口*/
        perror("connect");
        exit(1);
    }
    else {
        printf("connected.\n");
        printf("local port: %d\n", PORT);
    }

    if (listen(sockfd,3) < 0) {         /*監聽一個端口*/
        perror("listen");
        exit(1);
    }
    else {
        printf("listenning ....\n");
    }

    if ((newsockfd = accept (sockfd, &addr, &addr_len)) < 0) {  /*接受一個連接*/
        perror("accept");
    }
    else {
        printf("connect from %s\n",inet_ntoa(addr.sin_addr));
        if (read(newsockfd, msgbuffer, sizeof(msgbuffer)) <= 0) {   /*接收信息*/
            perror("accept");
        }
        else {
            printf("message:\n%s \n", msgbuffer);       /*輸出接收到的信息*/
        }
    }
}
