#include <stdio.h>
#include <ctype.h>                  /*包含ctype.h頭文件*/
main() {                            /*程序的主函數*/
    char s[] = "123a,.;sd0ASD$^";   /*定義一個字符數組*/
    int i;                          /*定義一個變量作爲循環計數器*/
    for (i = 0; s[i] != 0; i++) {   /*for 循環，根據指向的字符是否爲空作爲循環條件*/
        if (ispunct(s[i])) {        /*判斷當前字符是否是一個符號*/
            printf("%c is a punct.\n", s[i]);   /*如果是符號則輸出結果*/
        }
    }
}
