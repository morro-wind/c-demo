#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
main() {
    int fd, fd1;                                            /*定義打開文件的編號*/
    char path[] = "/tmp/txt1.txt";                          /*定義打開文件的編號*/
    extern int errno;                                       /*定義錯誤號*/
    fd = open(path, O_WRONLY, 0766);                        /*打開文件，只讀，不能自動新建*/
    if (fd != -1) {                                     /*如果返回值不爲-1*/
        printf("Opened file %s .\n", path);             /*顯示已經打開文件*/
    }
    else {
        printf("Can't open file %s.\n", path);          /*顯示不能打開文件*/
        printf("Errno: %d\n", errno);                   /*顯示錯誤號*/
        printf("ERR :%s\n", strerror(errno));           /*顯示錯誤信息*/
    }

    fd1 = open(path, O_WRONLY | O_CREAT, 0766);         /*打開文件，如果沒有文件則自動新建*/
    if (fd1 != -1) {                                /*如果返回的文件號不爲-1*/
        printf("Opened file %s .\n", path);         /*顯示文件新建成功*/
    }
    else {
        printf("Can't open file %s.\n", path);      /*顯示不能打開文件*/
        printf("Errno: %d\n", errno);               /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));      /*顯示錯誤信息*/
    }
}
