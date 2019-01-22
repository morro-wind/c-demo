#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
main() {
    int fd;                                         /*定義文件號*/
    char path[] = "/tmp/txt1.txt";                  /*定義打開的文件名*/
    int size;
    char s[100];                                    /*定義一個字符串*/
    extern int errno;                               /*使用錯誤號*/

    fd = open(path, O_RDONLY);                      /*打開文件*/
    if (fd != -1) {                                 /*打開成功*/
        printf("Opened file %s .\n", path);
    }
    else {
        printf("Can't open file %s.\n", path);      /*打開不成功*/
        printf("Errno: %d\n", errno);               /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));      /*顯示錯誤信息*/
    }

    size = read(fd, s, sizeof(s));                  /*讀取文件內容*/
    close(fd);                                      /*關閉文件*/
    printf("%s\n", s);                              /*輸出*/
    printf("%d\n", size);                           /*輸出返回的字節數*/
}
