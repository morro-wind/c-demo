#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int s;                                      /*定義相關的變量*/
    int val = 1, len, i;
    len = sizeof(int);

    if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0) {    /*建立一個套接字*/
        perror("connect");
        exit(1);
    }
    else {
        printf("A socket was created.\n");
        printf("Socket number:%d\n", s);
    }

    i = setsockopt(s, SOL_SOCKET, SO_TYPE, &val, len);  /*設置套接字的一個參數*/
    if ("i == 0") {                             /*判斷結果情況*/
        printf("Set socket ok.\n");
    }
    else {
        printf("Set socket error.\n");
    }

    setsockopt(100, SOL_SOCKET, SO_TYPE, &val, &len);   /*用錯誤的方法設置一個套接字*/
    perror("socket");
}
