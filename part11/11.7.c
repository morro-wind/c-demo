#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

main() {
    time_t t;                   /*定義一個time_t類型的時間*/
    struct tm *p;               /*定義一個tm 類型的時間指針*/
    char s[30];                 /*定義一個字符串*/
    time(&t);                   /*取當前時間*/
    strcpy(s,ctime(&t));        /*將時間轉換成字符串*/
    printf("%s\n",s);           /*輸出時間*/
    p = locatime(&t);           /*將時間轉換成tm 格式的結構體*/
    t = mktime(p);              /*將時間轉換成time_t類型的時間*/
    strcpy(s, ctime(&t));       /*將時間轉換成字符串*/
    printf("%s\n", s);          /*輸出時間*/
}
