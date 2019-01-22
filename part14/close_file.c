#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
main() {
    int fd;                                     /*定義一個文件編號*/
    char path[] = "/tmp/txt1.txt";              /*定義需要打開的文件名*/
    extern int errno;                           /*定義一個錯誤號*/

    fd = open(path, O_WRONLY | O_CREAT, 0766);  /*打開文件，如果沒有這個文件則新建*/
    if (fd != -1) {                             /*打開成功*/
        printf("Opened file %s .\n", path);     /*顯示打開成功*/
    }
    else {
        printf("Can't open file %s.\n", path);  /*顯示打開不成功*/
        printf("Errno: %d\n", errno);           /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));  /*顯示錯誤信息*/
    }

    if (close(fd) == 0) {                       /*關閉打開的文件*/
        printf("Closed.\n");                    /*顯示關閉成功*/
    }
    else {
        printf("Close file %s error.\n", path); /*顯示關閉不成功*/
        printf("Errno: %d\n", errno);           /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));  /*顯示錯誤信息*/
    }

    if (close(1156) == 0) {                     /*關閉一個不存在的文件號*/
        printf("Closed.\n");                    /*顯示關閉成功*/
    }
    else {
        printf("Close file %s error.\n",path);  /*關閉不成功則顯示錯誤*/
        printf("Errno: %d\n", errno);           /*顯示錯誤號*/
        printf("ERR: %s\n", strerror(errno));   /*顯示錯誤信息*/
    }
}
