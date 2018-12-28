#include <stdio.h>
#include <time.h>                       /*包含time.h 頭文件*/

main() {
    time_t timep;                       /*定義一個time_t型變量*/
    struct tm *p;                       /*定義一個tm型結構體指針*/
    time(&timep);                       /*取當前時間，返回到timep的值中*/
    p = gmtime(&timep);                 /*取當前時間，返回到結構體指針p上*/
    printf("Year  :%d\n", 1900+p->tm_year);     /*輸出年*/
    printf("Month :%d\n", 1+p->tm_mon);         /*輸出月*/
    printf("Day :%d\n", p->tm_mday);            /*日*/
    printf("Hour :%d\n", p->tm_hour);           /*小時*/
    printf("Minute:%d\n", p->tm_min);           /*分*/
    printf("Second:%d\n", p->tm_sec);           /*秒*/
    printf("Weekday:%d\n", p->tm_wday);         /*星期幾*/
    printf("Days :%d\n", p->tm_yday);           /*一年第幾天*/
    printf("Isdst :%d\n", p->tm_isdst);         /*是否使用了夏令時間*/
}
