#include <stdio.h>
#include <ctype.h>                          /*包含一個頭文件*/
main() {
    char s[] = "12asSHDqw^i&*";             /*定義一個字符數組*/
    int i;                                  /*定義一個變量作爲循環計算器*/
    for (i = 0; s[i] != 0; i++) {           /*如果數組中當前字符存在，則進行循環*/
        if (islower(s[i])) {                /*如果是小寫字母，則輸出一個結果*/
            printf("%c is a islower character.\n", s[i]);   /*輸出結果*/
        }
        if (isupper(s[i])) {                /*如果是大寫字母，則輸出結果*/
            printf("%c is a upper character.\n", s[i]); /*輸出結果*/
        }
    }
}
