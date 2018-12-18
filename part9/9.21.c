#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    int i;                      /*定義一個循環變量i*/
    char a[20] = "asdfghijk";   /*定義一個字符串並賦初值*/
    bzero(a, 3);                /*用bzero 函數將字符串a的前三個字符清除*/
    for (i = 0; i < 6; i++) {   /*用for循環執行6次輸出*/
        printf("%c \n", a[i]);  /*輸出數組中當前的字符*/
    }
}
