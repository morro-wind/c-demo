#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char a[20] = "qweaQWEa^*&aIOP"; /*定義兩個字符串並分別賦值*/
    char b[] = "qwer";
    int i, j;                       /*定義兩個整型變量分別存儲結果*/
    i = strlen(a);                  /*用strlen函數求出字符串a的長度*/
    j = strlen(b);                  /*用strlen函數求出字符串b的長度*/
    printf("%d\n", i);              /*輸出結果*/
    printf("%d\n", j);
}
