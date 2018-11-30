#include <stdio.h>
#include <string.h>                     /*包含string.h頭文件*/
main() {
    char a[20] = "asdfgQWERT";          /*定義兩個字符串並且賦值*/
    char b[20] = "asdfgqwERT";
    int i, j;                           /*定義兩個整型變量存儲比較結果*/
    i = memcmp(a, b, 5);                /*比較兩個字符串的前5個字符*/
    j = memcmp(a, b, 7);                /*比較兩個字符串的前7個字符*/
    printf("memcpy %s, %s, 5 charactor, result: %d \n", a, b, i);   /*輸出結果*/
    printf("memcpy %s, %s, 7 charactor, result: %d \n", a, b, j);
}
