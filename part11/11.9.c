#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>

main() {
    struct timeval tv;              /*定義一個timeval 類型的結構體*/
    struct timezone tz;             /*定義一個timezone 類型的結構體*/
    gettimeofday(&tv, &tz);         /*定義一個timezone 類型的結構體*/
    printf("tv_sec  : %d\n", tv.tv_sec);    /*輸出秒*/
    printf("tv_usec : %d\n", tv.tv_usec);   /*輸出微秒*/
    printf("tz_minuteswest  : %d\n", tz.tz_minuteswest);    /*與UTC 時間相差的分鍾數*/
    printf("tz_dsttime  : %d\n", tz.tz_dsttime);    /*與夏令時間相差的分鍾數*/
    tv.tv_sec = tv.tv_sec - 4000;           /*當前時間減去4000秒*/
    settimeofday(&tv, &tz);         /*設置當前時間*/
}
