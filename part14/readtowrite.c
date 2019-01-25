#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>

main() {
    int fd, fd2, size, i = 1;
    char path[] = "/tmp/txt2.txt";                  /*要打開文件*/
    char newpath[] = "/tmp/txt1.txt";               /*復制的目標文件*/
    char buf[100];                                  /*定義一個字符串*/

    extern int errno;                               /*定義一個錯誤號*/

    fd = open(path, O_RDONLY);                      /*打開源文件*/
    fd2 = open(newpath, O_WRONLY | O_CREAT);        /*打開目標文件*/
    if (fd != -1) {
        printf("Opened file %s .\n", path);         /*源文件打開成功*/
    }
    else {
        printf("Can't open file %s.\n", path);      /*源文件打開失敗*/
        printf("Errno: %d\n", errno);               /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));      /*顯示錯誤信息*/
    }

    for (;i != 0;){
        i = read(fd, buf, sizeof(buf));             /*從源文件中讀取內容*/
        printf("%d", i);                            /*輸出讀取的字節個數*/
        printf("%s", buf);                          /*輸出內容*/
        if (i == -1) {                              /*到達末尾則結束*/
            break;                                  /*結束循環*/
        }
        else {
            write(fd2, buf, sizeof(buf));           /*將讀取的內容寫入目標文件中*/
        }
    }
    close(fd);
    close(fd2);
}
