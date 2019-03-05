#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define PORT 80                                 /*定義一個端口號*/
#define REMOTE_IP "149.28.193.228"              /*定義一個IP 地址*/

int main(int argc, char *argv[]) {
    int s;                                      /*定義相關的變量*/
    struct sockaddr_in addr;
    char mybuffer[256];

    if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0) {    /*建立一個socket*/
        perror("socket");
        exit(1);
    }
    else {
        printf("socket created.\n");
        printf("socked id: %d \n",s);
    }

    bzero(&addr, sizeof(addr));             /*設置addr 的信息*/
    addr.sin_family = AF_INET;
    addr.sin_port = htons(PORT);
    addr.sin_addr.s_addr = inet_addr(REMOTE_IP);

    if (connect(s, &addr, sizeof(addr)) < 0) {  /*鏈接到遠程服務器*/
        perror("connect");
        exit(1);
    }
    else {
        printf("connected ok!\n");
        printf("remote ip: %s\n", REMOTE_IP);
        printf("remote port: %d\n", PORT);
    }
}
