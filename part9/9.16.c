#include <stdio.h>
#include <string.h>                     /*包含string.h頭文件*/
main() {
    char a[20] = "asdfgQWERT";          /*定義兩個字符串並且賦值*/
    char b[20] = "asdfgqwFRT";
    int i, j, k;                        /*定義幾個變量存儲比較結果*/
    i = strncasecmp(a, b, 5);           /*忽略大小寫比較前5個字符*/
    j = strncasecmp(a, b, 7);           /*忽略大小寫比較前7個字符*/
    k = strncasecmp(a, b, 8);           /*忽略大小寫比較前8個字符*/
    printf("strncasecmp %s, %s, 5 charactor, result: %d \n", a, b, i);  /*輸出結果*/
    printf("strncasecmp %s, %s, 7 charactor, result: %d \n", a, b, j);
    printf("strncasecmp %s, %s, 8 charactor, result: %d \n", a, b, k);
}
