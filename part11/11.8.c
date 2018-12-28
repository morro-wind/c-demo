#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>

main() {
    struct timeval tv;          /*定義一個timeval 類型的結構體*/
    struct timezone tz;         /*定義一個timezone 類型的結構體*/
    gettimeofday(&tv, &tz);     /*取得當前時間。兩個結構體的指針作爲參數*/
    printf("tv_sec  :%d\n", tv.tv_sec); /*輸出秒*/
    printf("tv_usec :%d\n", tv.tv_usec);    /*輸出微妙*/
    printf("tz_minuteswest: %d\n", tz.tz_minuteswest);  /*輸出UTC時間相差的分鍾數*/
    printf("tz_dsttime  : %d\n", tz.tz_dsttime);    /*輸出與夏令時間相差的分鍾數*/
}
