#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

main() {
    int fd;                                     /*定義文件號*/
    char path[] = "/tmp/txt1.txt";              /*要打開的文件*/
    char s[] = "Hello , Linux.\nI've leart C program for two weeks.\n"; /*要寫入的字符串*/

    extern int errno;                           /*定義錯誤號*/

    fd = open(path, O_WRONLY | O_CREAT);       /*打開文件*/
    if (fd != -1) {                             /*文件打開成功*/
        printf("opened file %s .\n", path);
    }
    else {
        printf("can't open file %s .\n",path);  /*文件打開失敗*/
        printf("errno: %d\n", errno);           /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));  /*顯示錯誤信息*/
    }
    write(fd, s, sizeof(s));                    /*寫入文件*/
    sync();                                     /*將緩衝區數據寫入磁盤*/
    printf("sync function done. \n");           /*輸出信息*/
    close(fd);                                  /*關閉文件*/
}
