#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char a[] = "C is a useful language for Linux OS.I'll study it hard.";   /*定義一個字符串*/
    char *s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";   /*定義允許出現字符的字符串，最後一個字符串是一個空格*/
    int i;                      /*定義一個整型變量存放結果*/
    i = strspn(a, s);           /*用strspn函數進行查找*/
    printf("%d", i);            /*輸出結果*/
}
