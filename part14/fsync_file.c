#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

main() {
    int fd;                                         /*定義文件號*/
    char path[] = "/tmp/txt1.txt";                  /*要打開的文件*/
    char s[] = "Hello ,Linux.\nI've leart C program for two weeks.\n";

    extern int errno;                               /*定義錯誤號*/

    fd = open(path, O_WRONLY | O_CREAT);            /*打開文件*/
    if (fd != -1) {
        printf("opened file %s .\n", path);
    }
    else {
        printf("can't openfile %s. \n",path);
        printf("Errno: %d\n", errno);
        printf("ERR : %s\n", strerror(errno));
    }

    write(fd, s, sizeof(s));                        /*寫入文件*/
    if (fsync(fd) == 0) {                           /*將緩衝區數據寫入磁盤*/
        printf("fsync function done.\n");           /*write success*/
    }
    else {
        printf("fsync function failed.\n");         /*write fail*/
    }
    close(fd);                                      /*close file*/
}
