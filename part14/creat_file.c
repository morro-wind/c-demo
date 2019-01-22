#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
main (){
    extern int errno;                       /*定義錯誤號*/
    char *path = "/tmp/tmp.txt";

    if (creat(path, 0766) == -1) {          /*用creat 函數創建一個文件*/
        printf("Can't create the file %s.\n", path);    /*不能創建文件*/
        printf("Errno: %d\n", errno);           /*顯示錯誤號*/
        printf("Err : %s\n", strerror(errno));  /*顯示錯誤信息*/
    }
    else {
        printf("Created file %s.\n", path);     /*顯示創建成功*/
    }
}
