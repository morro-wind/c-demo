#include <stdio.h>
#include <string.h>         /*包含string.h頭文件*/
main() {
    char a[20] = "asdfghijk";   /*定義一個字符串並且賦值*/
    char b[20] = "";            /*定義一個空字符串*/
    char *p;                    /*定義一個指向字符的指針*/
    p = strncpy(b, a, 5);       /*將字符串a 取5個字符復制到字符串b中*/
    printf("%s\n", a);          /*輸出字符串a*/
    printf("%s\n", b);          /*輸出字符串b*/
    printf("%s\n", p);          /*輸出指針p指向的字符串*/
}

