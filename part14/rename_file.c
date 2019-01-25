#include <stdio.h>
#include <string.h>
#include <errno.h>

main() {
    int fd;

    char oldpath[] = "/tmp/txt1.txt";
    char newpath[] = "/tmp/txt2.txt";

    extern int errno;

    fd = rename(oldpath, newpath);
    if (fd != -1) {
        printf("rename %s success, newfile %s.\n", oldpath, newpath);
    }
    else {
        printf("rename %s fail\n", oldpath);
        printf("Errno: %d\n", errno);
        printf("ERR : %s\n", strerror(errno));
    }
}
