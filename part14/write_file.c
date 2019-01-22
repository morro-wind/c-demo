#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
main() {
    int fd;                                     /*定義打開的文件號*/
    char path[] = "/tmp/txt1.txt";              /*定義要寫入文件的路徑*/
    char s[] = "Hello, Linux.\n I've leart C program for two weeks.\n"; /*定義要寫入的字符串*/
    extern int errno;                           /*使用錯誤號*/

    fd = open(path, O_WRONLY | O_CREAT);        /*打開文件*/
    if (fd != -1) {                             /*打開文件是否成功*/
        printf("Opened file %s .\n", path);     /*文件打開成功*/
    }
    else {
        printf("Can't open file %s.\n", path);  /*文件打開不成功*/
        printf("Errno: %d\n", errno);           /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));  /*顯示錯誤信息*/
    }

    write(fd, s, sizeof(s));                    /*將內容寫入文件中*/
    close(fd);                                  /*關閉文件*/
    printf("Done");                             /*顯示信息*/
}
