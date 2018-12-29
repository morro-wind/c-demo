#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

main() {
    time_t t;                       /*定義一個time_t 類型的時間*/
    struct tm *p;                   /*定義一個tm 類型的結構體時間指針*/
    int i;                          /*定義一個整型變量*/
    struct timeval tv;              /*定義一個timeval 類型的結構體*/
    struct timezone tz;             /*定義一個timezone 類型的結構體*/

    time(&p);                       /*用time 函數取得當前的時間*/
    p = gmtime(&t);                 /*用gmtime 函數取出tm 結構體時間*/
    printf("Change your time:\n");  /*提示*/
    printf("Year:\n");              /*提示輸入年*/
    scanf("%d", &i);                /*輸入*/
    (*p).tm_year = i - 1900;    /*把年的時間減去1900,賦值給結構體中的年時間*/
    printf("Month:\n");         /*提示輸入月*/
    scanf("%d", &i);            /*輸入*/
    (*p).tm_mon = i - 1;        /*月份減一賦值給結構體中的月時間*/
    printf("Date:\n");          /*輸入日*/
    scanf("%d", &i);
    (*p).tm_mday = i;
    printf("Hour:\n");          /*輸入小時*/
    scanf("%d", &i);
    (*p).tm_hour = i;
    printf("Minute:\n");        /*輸入分*/
    scanf("%d", &i);
    (*p).tm_min = i;
    printf("Second:\n");        /*輸入秒*/
    scanf("%d", &i);
    (*p).tm_sec = i;

    t = mktime(p);              /*把輸入的時間結構體構造成time_t類型的時間*/
    tz.tz_minuteswest = 0;      /*構造timezone 類型結構體*/
    tz.tz_dsttime = 0;
    tv.tv_sec = t;              /*構造timeval 結構體中的秒*/
    tv.tv_usec = 0;             /*構造微秒*/
    settimeofday (&tv, &tz);    /*設置時間*/
    printf("Done!\n");          /*輸出提示*/
}
