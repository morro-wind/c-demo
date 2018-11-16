#include <stdio.h>
#include <ctype.h>                      /*包含ctype.h頭文件*/
main() {                                /*程序的主函數*/
    char s[] = "123asd0ASD$%&^";        /*定義一個字符數組*/
    int i;                              /*定義一個變量作爲循環計數器*/
    for (i = 0; s[i] != 0; i++) {       /*判斷當前字符是不是一個數字*/
        if (isdigit(s[i])) {
            printf("%c is a number.\n",s[i]);   /*輸出判斷結果*/
        }
    }
}
