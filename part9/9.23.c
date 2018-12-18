#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char *p, *q;                /*定義兩個指向字符的指針*/
    char a[20] = "asdfghasdf";  /*定義一個字符串並且賦值*/
    p = index(a, 'g');          /*在字符串中查找字符g第一次出現的位置*/
    q = rindex(a, 'd');         /*在字符串中查找字符d最後一次出現的位置*/
    printf("%c\n", *p);         /*輸出指針p指向的內容*/
    printf("%c\n", *q);         /*輸出指針q指向的內容*/
}
