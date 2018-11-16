#include <stdio.h>      /*包含標準輸入輸出的頭文件*/
#include <time.h>       /*包含時間頭文件*/
main(void) {            /*主函數*/
    struct tm *ptr;     /*定義一個指針，這個數據類型在頭文件time.h中定義*/
    time_t lt;          /*定義一個變量，這個變量在頭文件time.h中定義*/
    lt = time(NULL);    /*取得當前的系統時間*/
    ptr = gmtime(&lt);  /*格式化這個時間*/
    printf("%s",asctime(ptr));/*輸出這個時間*/
    printf("%s",ctime(&lt)); /*以另一種形式輸出當前時間*/
}
