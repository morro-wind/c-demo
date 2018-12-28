#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main() {
    time_t t;
    time_t *p = &t;             /*定義一個指向time_t 類型變量的指針*/
    struct gm *q;               /*定義一個gm 類型的指針*/
    char s[30];                 /*定義一個字符串s*/
    time(p);                    /*取時間，參數是指針p，將結果返回到指針的內存單元中*/
    q = gmtime(p);              /*用gmtime 函數返回一個gm格式的時間指針*/
    strcpy(s, asctime(q));      /*將asctime 返回的結果復制到字符串s上*/
    printf("%s\n", s);          /*輸出字符串s*/
}
