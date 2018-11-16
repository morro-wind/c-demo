#include <stdio.h>
#include <ctype.h>                  /*包含頭文件ctype.h*/
main() {
    char s[] = "12 0Q\n*&";         /*定義一個字符組*/
    int i;                          /*定義一個整型變量作爲循環計數器*/
    for (i = 0; s[i] != 0; i++) {   /*for循環，判斷s[i]是否爲空作爲循環條件*/
        if (isgraph(s[i])) {        /*判斷當前字符是否是可打印字符*/
            printf("%c is a printable charcter.\n", s[i]);
        }
    }
}
