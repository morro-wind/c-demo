#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char a[20] = "asdfgh";      /*定義兩個字符串並且賦值*/
    char b[20] = "ijklmn";
    char *s;                    /*定義一個指向字符串的指針*/
    printf("%s\n%s\n", a, b);   /*輸出兩個源字符串*/
    s = memccpy(a, b, 'k', 3);  /*進行字符串替換，查找賦值爲k的字符。返回賦值爲k的字符的下一個指針*/
    printf("%c\n", *s);         /*輸出返回指針指向的字符*/
    printf("%s\n%s\n", a, b);   /*輸出替換以後的字符串和源字符串*/
}
