#include <stdio.h>
#include <time.h>                   /*包含“time.h" 頭文件*/

int main() {
    time_t s;
    time_t *p = &s;                 /*取時間，參數是指針p，將結果返回到指針的內存單元中*/
    time(p);
    printf("Now :%ld\n", *p);       /*輸出時間*/
}
