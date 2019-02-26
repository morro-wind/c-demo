#include <sys/types.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <stdio.h>

int main() {
    int s;                                          /*定義相關的變量*/
    int val, len;
    len = sizeof(int);                              /*長度*/

    if ((s = socket(AF_INET, SOCK_STREAM, 0)) < 0) {    /*建立一個套接字*/
        perror("connect");
        exit(1);
    }
    else {
        printf("A socket was created.\n");
        printf("Socket number:%d\n", s);
    }

    getsockopt(s, SOL_SOCKET, SO_TYPE, &val, &len);     /*取得套接字的一個信息*/
    perror("Socket:");                                  /*輸出錯誤*/
    printf("optval = %d\n", val);                       /*輸出結果*/
    getsockopt(100, SOL_SOCKET, SO_TYPE, &val, &len);   /*用錯誤的方法取得一個信息*/
    perror("socket:");
}
