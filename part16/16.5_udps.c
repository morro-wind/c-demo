#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>

#define LOCALPORT 4567

int main(int argc, char *argv[]) {
    int mysock, len;                            /*定義相關的變量*/
    struct sockaddr_in addr;
    int i = 0;
    char msg[256];                              /*定義一個數組，保存發送與接收的信息*/
    int addr_len;

    if ((mysock = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {    /*建立一個鏈接*/
        perror("error");                        /*輸出錯誤*/
        exit(1);
    }
    else {                                      /*socket 建立成功， 則給出提示信息*/
        printf("Socket created.\n");
        printf("Socket id: %d\n", mysock);
    }

    addr_len = sizeof(struct sockaddr_in);      /*長度*/
    bzero(&addr, sizeof(addr));                 /*清空地址所在的內存*/
    addr.sin_family = AF_INET;                  /*填充地址結構體*/
    addr.sin_port = htons(LOCALPORT);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(mysock, &addr, sizeof(addr)) < 0) {    /*在socket 上面綁定端口號與IP地址*/
        perror("Connect");                      /*輸出錯誤信息*/
        exit(1);
    }
    else {
        printf("Bind ok.\n");                   /*綁定成功則輸出信息*/
        printf("Local port:%d\n", LOCALPORT);
    }

    while (1) {                                 /*進入一個循環*/
        bzero(msg, sizeof(msg));                /*清空msg 所在的內存*/
        len = recvfrom(mysock, msg, sizeof(msg), 0, &addr, &addr_len);

        printf("%d :", i);                     /*輸出計數*/
        i++;
        printf("message from: %s\n", inet_ntoa(addr.sin_addr)); /*輸出ip地址*/
        printf("message length: %d\n", len);    /*輸出長度信息*/
        printf("message: %s\n\n", msg);         /*輸出信息*/
        sendto(mysock, msg, len, 0, &addr, addr_len);   /*字符串返回給客戶端*/
    }
}
