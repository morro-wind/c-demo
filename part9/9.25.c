#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char *p, *q;                /*定義兩個指向字符的指針*/
    char a[20] = "asdfghasdf";  /*定義一個字符串並且賦初值*/
    p = strchr(a, 's');         /*在字符串a 中查找s第一次出現的位置*/
    q = strrchr(a, 'd');        /*在字符串a 中查找d最後一次出現的位置*/
    printf("%c\n", *p);         /*輸出指針p指向的字符*/
    printf("%c\n", *q);         /*輸出指着q指向的字符*/
}
