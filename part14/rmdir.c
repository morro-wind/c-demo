#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
main () {
    extern int errno;                       /*設置錯誤編號*/
    char *path = "/root/tmp11";             /*設置需要刪除的目錄*/

    if (rmdir(path) == 0) {                 /*刪除文件，返回值與0比較*/
        printf("Deleted the directory %s.\n", path);        /*顯示刪除成功*/
    }
    else {
        printf("Can't delete the directory %s.\n", path);   /*顯示刪除錯誤*/
        printf("Errno: %d\n", errno);                       /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));              /*顯示錯誤信息*/
    }
}
