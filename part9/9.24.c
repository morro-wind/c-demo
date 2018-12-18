#include <stdio.h>
#include <string.h>                 /*包含string.h頭文件*/
main() {
    char *p;                        /*定義一個指向字符的指針*/
    char a[20] = "asdfghasdf";      /*定義一個字符串並且賦值*/
    p = memchr(a, 'f', 10);         /*在字符串a的前10個字符串中查找字符f*/
    printf("%c\n",*p);              /*輸出指針p指向的字符*/
}
