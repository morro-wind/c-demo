#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
main() {
    extern int errno;                               /*設置一個錯誤號*/
    char path[] = "mytemp-XXXXXX";                  /*定義文件名*/

    if (mkstemp(path) != -1) {                      /*建立一個臨時文件*/
        printf("Created temp file %s.\n", path);    /*顯示文件已經建立*/
    }
    else {
        printf("Can't create temp file %s.\n", path);   /*顯示不能創建臨時文件*/
        printf("Errno: %d\n", errno);                   /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));          /*顯示錯誤信息*/
    }
}
