#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>

#define PORT 5678
#define REMOTE_IP "127.0.0.1"

int main(int argc, char *argv[]) {
    int s;                          /*定義相關變量*/
    struct sockaddr_in addr;
    char mybuffer[256];

    if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket");
        exit(1);
    }
    else {
        printf("socket created.\n");
        printf("socked id: %d \n", s);
    }

    bzero(&addr, sizeof(addr));     /*設置addr*/
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.s_addr = inet_addr(REMOTE_IP);

    if (connect(s, &addr, sizeof(addr)) < 0) {      /*連接遠程服務器*/
        perror("connect");
        exit(1);
    }
    else {
        printf("connected ok!\n");
        printf("remote ip: %s\n", REMOTE_IP);
        printf("remote port: %d\n", PORT);
    }

    recv(s, mybuffer, sizeof(mybuffer), 0);     /*接收服務器發送的信息*/
    printf("%s\n", mybuffer);                   /*輸出信息*/

    while (1) {                                 /*進入一個循環*/
        bzero(mybuffer, sizeof(mybuffer));      /*清空mybuffer 字符串*/
        read(STDIN_FILENO, mybuffer, sizeof(mybuffer)); /*讀取輸入*/

        if (send(s, mybuffer, sizeof(mybuffer), 0) < 0) {   /*發送信息*/
            perror("send");                     /*錯誤處理*/
            exit(1);
        }
        else {
            bzero(mybuffer, sizeof(mybuffer));      /*清空mybuffer 內存*/
            recv(s, mybuffer, sizeof(mybuffer), 0); /*接收信息*/
            printf("received: %s\n", mybuffer);     /*輸出信息*/
        }
    }
}
