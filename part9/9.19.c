#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char a[20] = "asdfgh";      /*定義一個字符串且賦值*/
    char b[20];                 /*定義一個字符串*/
    char *p;                    /*定義一個指向字符的指針*/
    p = strcpy(b, a);           /*將字符串a復制到字符串b中*/
    printf("%s\n", a);          /*輸出原字符串a*/
    printf("%s\n", b);           /*輸出復制後的字符串b*/
    printf("%s\n", p);          /*輸出指針p指向的內容*/
}
