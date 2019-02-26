#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define REMOTEPORT 4567                         /*定義表示端口號的常量*/
#define REMOTEIP "127.0.0.1"                    /*定義表示ip地址的常量*/

int main(int argc, char *argv[]) {
    int s, len;                                 /*定義相關的變量*/
    struct sockaddr_in addr;
    int addr_len;
    char msg[256];                              /*定義一個數組發送與接收數據*/
    int i = 0;

    if ((s = socket(AF_INET, SOCK_DGRAM, 0)) < 0) { /*建立一個socket*/
        perror("error");                        /*輸出錯誤*/
        exit(1);
    }
    else {
        printf("Socket created.\n");            /*輸出提示信息*/
        printf("Socket id: %d\n", s);
        printf("Remote ip: %s\n", REMOTEIP);
        printf("Remote port: %d\n", REMOTEPORT);
    }

    len = sizeof(struct sockaddr_in);           /*長度*/
    bzero(&addr, sizeof(addr));                 /*空間地址結構體所在的內存空間*/
    addr.sin_family = AF_INET;                  /*填充地址與端口的信息*/
    addr.sin_port = htons(REMOTEPORT);          /*端口*/
    addr.sin_addr.s_addr = inet_addr(REMOTEIP);

    while (1) {
        bzero(msg, sizeof(msg));                /*清空msg 所在的內存*/
        len = read(STDIN_FILENO, msg, sizeof(msg)); /*接收信息*/
        sendto(s, msg, len, 0, &addr, addr_len);    /*發送信息*/
        printf("\nInput message: %s \n", msg);  /*輸出結果*/
        len = recvfrom(s, msg, sizeof(msg), 0, &addr, &addr_len);   /*這是接收到的信息*/

        printf("%d :",i);                       /*輸出計數*/
        i++;
        printf("Recived message: %s\n",msg);
    }
}
