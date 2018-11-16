#include <stdio.h>
#include <ctype.h>                  /*包含頭文件ctype.h*/
main() {
    char s[] = "12as056;^*&";       /*定義一個字符串數組*/
    int i;                          /*定義一個整型變量作爲循環計數器*/
    for (i = 0;s[i] != 0;i++) {     /*for循環，判斷s[i]是否爲空作爲循環條件*/
        if (isalpha(s[i])) {       /*判斷當前字符是不是字母*/
            printf("%c is a character.\n", s[i]);    /*輸出結果*/
        }
    }
}
