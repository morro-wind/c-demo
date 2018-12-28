#include <stdio.h>
#include <time.h>           /*包含time.h頭文件*/
#include <string.h>         /*包含stdlib.h 頭文件*/

int main() {
    time_t t;
    time_t *p = &t;         /*定義一個指向time_t 類型變量的指針*/
    char s[30];             /*定義一個字符串s*/
    time(p);                /*取時間，參數是指針p，將結果返回到指針的內存單元中*/
    strcpy(s, ctime(p));    /*將ctime 返回的結果復制到字符串s上*/
    printf("%s\n", s);      /*輸出字符串s*/
}
