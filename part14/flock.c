#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

main() {
    int fd, i;                                  /*包含頭文件*/
    char path[] = "/tmp/txt1.txt";              /*access file*/
    extern int errno;                           /*定義錯誤號*/

    fd = open(path, O_WRONLY | O_CREAT);          /*open file*/
    if (fd != -1) {                            /*打開成功*/
        printf("opened file %s .\n", path);
        printf("please input a number to lock the file.\n");    /*輸入一個數字*/
        scanf("%d", &i);                        /*輸入*/
        if (flock(fd, LOCK_EX) == 0) {          /*鎖定文件*/
            printf("the file was locked.\n");   /*輸出信息*/
        }
        else {
            printf("The file was not locked.\n");    /*文件鎖定失敗*/
        }
        printf("Please input a number to unlock the file.\n");  /*提示輸入*/
        scanf("%d", &i);                        /*輸入*/
        if (flock(fd, LOCK_UN) == 0) {          /*解除文件鎖定*/
            printf("The file was unlocked.\n"); /*輸出解除鎖定成功*/
        }
        else {
            printf("The file was not unlocked.\n"); /*輸出解除鎖定失敗*/
        }
        close(fd);
    }
    else {
        printf("Can't open file %s.\n", path);  /*不能打開文件的情況*/
        printf("Errno: %d\n", errno);           /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));  /*顯示錯誤信息*/
    }
}
