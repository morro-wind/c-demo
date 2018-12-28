#include <stdio.h>
#include <time.h>                       /*包含“time.h”頭文件*/

int main() {
    time_t s;                           /*定義一個time_t型時間變量*/
    s = time((time_t*)NULL);            /*取當前的時間，參數是一個空指針*/
    printf("Now :%ld\n",s);             /*輸出時間*/
}
