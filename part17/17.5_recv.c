#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/socket.h>

#define PORT 21                                 /*定義一個端口號*/
#define REMOTE_IP "202.38.97.197"               /*定義一個IP 地址*/

int main(int argc, char *argv[]) {
    int s;                                      /*定義相關的變量*/
    struct sockaddr_in addr;
    char mybuffer[256];

    if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0) {    /*建立一個socket*/
        perror("socket");
        exit(1);
    }
    else {
        printf("socket created.\n");            /*socket 建立成功*/
        printf("socked id:%d \n", s);
    }

    bzero(&addr, sizeof(addr));                 /*清空addr 所佔的內存*/
    addr.sin_family = AF_INET;                  /*設置addr 的成員*/
    addr.sin_port = htons(PORT);
    addr.sin_addr.s_addr = inet_addr(REMOTE_IP);

    if (connect(s, &addr, sizeof(addr)) < 0) {   /*接連遠程服務器*/
        perror("connect");
        exit(1);
    }
    else {
        printf("connected ok!\n");              /*連接成功*/
        printf("remote ip: %s\n", REMOTE_IP);
        printf("remote port: %d\n", PORT);
    }

    recv(s, mybuffer, sizeof(mybuffer), 0);     /*接收信息*/
    printf("%s\n", mybuffer);                   /*輸出接收到的信息*/
}
