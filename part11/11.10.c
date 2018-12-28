#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>

main() {
    struct timeval tv, tv2;         /*定義兩個timeval類型的結構體*/
    struct timezone tz;             /*定義一個timezone類型的結構體*/
    long sec, usec, i;              /*定義三個長整型數*/

    gettimeofday(&tv, &tz);         /*取得當前時間*/
    for (i = 0; i < 100000000; i++) {   /*程序進行多次循環*/
        ;;;;;;;;;;;;;;;;;;;;;;;;;;      /*執行一段空語句。分號表示空語句*/
    }
    gettimeofday (&tv2, &tz);       /*取得結束時的時間*/
    sec = tv2.tv_sec - tv.tv_sec;   /*用減法求出秒數*/
    usec = tv2.tv_usec - tv.tv_usec;    /*用減法求得微秒數*/
    printf("%ld\n", sec * 1000000 + usec);  /*把秒轉換成微秒，再與微妙相加，輸出結果*/
}
