#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char *p;                    /*定義一個指向字符的指針*/
    char a[20] = "qweaQWEa^*&aIOP"; /*定義一個字符串並且賦初值*/
    char s[] = "a";                 /*定義分割字符串的標記*/
    printf("%s\n", a);              /*輸出源字符串*/
    p = strtok(a, s);               /*調用strtok 函數分割字符串*/
    printf("%s\n", p);              /*輸出指針p指向的字符串*/
    while (p = strtok(NULL,s)) {    /*用while 循環輸出字符串*/
        printf("%s\n", p);          /*每次循環輸出字符串的結果*/
    }
}
