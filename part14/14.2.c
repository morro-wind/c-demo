#include <stdio.h>
#include <string.h>
#include <errno.h>
int main(void) {
    int i;                          /*定義一個循環變量*/
    for (i = 1; i <= 15; i++) {     /*循環輸出*/
        printf("Errno:%d ",i);      /*輸出錯誤號*/
        printf("Message:%s\n", strerror(i));    /*輸出錯誤信息*/
    }
}
