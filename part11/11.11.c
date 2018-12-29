#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>

main() {
    struct timeval tv, tv2;             /*定義兩個timeval 類型的結構體*/
    struct timezone tz;                 /*定義一個timezone 類型的結構體*/
    long sec, usec, i;                  /*定義三個長整型數*/

    printf("please input a number:\n"); /*提示輸入*/
    scanf("%ld", &i);                    /*輸入*/
    gettimeofday (&tv, &tz);            /*取當前的時間*/
    printf("please input a number: \n");    /*第二次提示輸入*/
    scanf("%ld", &i);                        /*輸入*/
    gettimeofday (&tv2, &tz);               /*取當前時間*/

    sec = tv2.tv_sec - tv.tv_sec;           /*用減法求得秒數*/
    usec = tv2.tv_usec - tv.tv_usec;        /*用減法求得微秒數*/
    printf("%ld SEC %ld USEC\n", (sec * 1000000 + usec) / 100000, (sec * 1000000 + usec) % 1000000);
}
