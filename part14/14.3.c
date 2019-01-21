#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/type.h>
#include <sys/stat.h>
main () {
    extern int errno;                       /*設置一個錯誤*/
    char *path = "/root/tmp11";             /*定義一個字符串表示需要創建的目錄*/

    if (mkdir(path, 0766) == 0) {           /*創建一個目錄*/
        /*需要注意這裏的權限設置參數，地一個0表示八進制數，766的含義如本章
         * 14.1節所述。如果目錄創建成功，則會返回0,返回值與0 進行比較*/
        printf("created the directory %s.\n", path);    /*輸出目錄創建成功*/
    }
    else                                    /*如果不成功則輸出提示信息*/
    {
        printf("cant't create the directory %s.\n", path);  /*輸出信息*/
        printf("errno: %d\n", errno);           /*輸出錯誤號*/
        printf("ERR : %s\n", strerror(errno));  /*輸出錯誤信息*/
    }
}
