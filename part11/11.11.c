#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>

main() {
    struct timeval tv, tv2;             /*定義兩個timeval 類型的結構體*/
    struct timezone tz;                 /*定義一個timezone 類型的結構體*/
    long sec, usec, i;                  /*定義三個長整型數*/

    printf("please input a number:\n"); /*提示輸入*/
    scanf("%d", &i);                    /*輸入*/
    gettimeofday (&tv, &tz);            /*取當前的時間*/
