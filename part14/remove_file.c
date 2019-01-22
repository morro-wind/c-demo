#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

main() {
    extern int errno;                                   /*定義一個錯誤號*/
    char *path = "/tmp/tmp.txt";                        /*定義要刪除的文件名*/

    if (remove(path) == 0) {                            /*刪除文件*/
        printf("Deleted file %s. \n", path);            /*顯示刪除成功*/
    }
    else {
        printf("Can't delete the file %s.\n", path);    /*顯示刪除失敗*/
        printf("Errno: %d\n", errno);                   /*顯示錯誤號*/
        printf("ERR : %s\n", strerror(errno));          /*顯示錯誤信息*/
    }
}
