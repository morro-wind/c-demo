#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#define PORT 5678                       /*定義端口號*/
#define MAX 10                          /*最大的連接數*/

main() {
    int sockfd, newsockfd, is_connected[MAX], fd;   /*定義相關的變量*/
    struct sockaddr_in addr;
    int addr_len = sizeof(struct sockaddr_in);
    fd_set myreadfds;
    char msgbuffer[256];
    char msg[] = "This is the meassage from server. Connected.\n";

    if ((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {   /*建立一個socket*/
        perror("socket");
        exit(1);
    }
    else {
        printf("socket created.\n");                /*socket 建立成功，輸出提示*/
        printf("socked id: %d \n", sockfd);
    }

    bzero(&addr, sizeof(addr));                     /*清空addr 所在的內存*/
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(sockfd, &addr, sizeof(addr)) < 0) {    /*綁定端口*/
        perror("connect");
        exit(1);
    }
    else {
        printf("connected.\n");
        printf("local port:%d\n",PORT);
    }

    if (listen(sockfd,3) < 0) {                     /*開始監聽*/
        perror("listen");
        exit(1);
    }
    else {
        printf("listenning......\n");
    }

    for (fd = 0; fd < MAX; fd++) {
        is_connected[fd] = 0;                       /*設置所有的標記爲0*/
    }

    while(1) {                                      /*進入一個循環，處理所有的連接*/
        FD_ZERO(&myreadfds);                        /*清空一個標志*/
        FD_SET(sockfd, &myreadfds);                 /*設置標志*/

        for (fd = 0; fd < MAX; fd++) {              /*判斷有沒有連接*/
            FD_SET(fd, &myreadfds);                 /*設置標志*/
        }
    }

    if(!select (MAX, &myreadfds, NULL, NULL, NULL)) {   /*如果達到了最大的連接數，則進入下一次循環*/
        /*continue;
         */
        return;
    }

    for (fd = 0; fd < MAX; fd++) {                  /*進入一個循環*/
        if (FD_ISSET(fd, &myreadfds)) {             /*判斷標志*/
            if (sockfd == fd) {                     /*如果新建的socket 與 fd相同*/
                if ((newsockfd = accept (sockfd, &addr, &addr_len)) < 0) {  /*接受一個連接，新建一個socket*/
                    perror("accept");
                }
                write(newsockfd, msg, sizeof(msg)); /*給客戶端發送一段信息*/
                is_connected[newsockfd] = 1;        /*設置標志*/
                printf("connect from %s\n", inet_ntoa(addr.sin_addr)); /*輸出客戶端的IP 地址*/
            }
            else {
                bzero(msgbuffer, sizeof(msgbuffer));    /*清空字符串*/
                if (read(fd, msgbuffer, sizeof(msgbuffer)) <= 0) {  /*讀取結果*/
                    printf("connect closed.\n");        /*輸出連接關閉*/
                    is_connected[fd] = 0;               /*設置標志*/
                    close(fd);                          /*關閉一個socket*/
                }
                else {
                    write(fd, msgbuffer, sizeof(msgbuffer));    /*發送接收到的信息*/
                    printf("message: %s \n", msgbuffer);        /*輸出接收到的信息*/
                }
            }
        }
    }
}
