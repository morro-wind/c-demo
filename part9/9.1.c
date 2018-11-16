#include <stdio.h>              /*包含有文件的ctype.h*/
#include <ctype.h>
main() {
    char s[] = "12as06;^*&";    /*定義一個字符串數組*/
    int i;                      /*定義一個整型變量作爲循環計數器*/
    for (i = 0; s[i] != 0; i++) {   /*for循環，判斷s[i]是否爲空作爲循環條件*/
        if (isalnum(s[i])) {        /*判斷當前字符是不是一個字母或數字*/
            printf("%c is a number or character.\n",s[i]);   /*輸出結果*/
        }
    }
}
