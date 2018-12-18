#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char *p;                    /*定義一個指向字符的指針*/
    char a[20] = "asdfg";       /*定義一個字符串並且賦初值*/
    char b[20] = "hjklm";
    printf("%s\n", a);          /*輸出原來的字符串*/
    printf("%s\n", b);
    p = strcat(a, b);           /*將字符串b 連接到字符串a的後面*/
    printf("%s\n", a);          /*輸出連接以後的字符串*/
    printf("%s\n", b);
    printf("%s\n", p);          /*輸出指針p 指向的字符串*/
}
