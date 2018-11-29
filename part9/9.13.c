#include <stdio.h>
#include <stdlib.h>             /*包含stdlib.h頭文件*/
main() {
    char a[20] = "asFG$%";      /*定義一個字符串並且賦值*/
    int i;                      /*定義一個整型變量作爲計數器*/
    char c;                     /*定義一個字符變量存儲結果*/
    printf("tolower:\n");       /*輸出提示*/
    for (i = 0; a[i] != 0; i++) {    /*for 循環訪問數組中的每個字符*/
        c = tolower(a[i]);      /*將當前字符轉換成小寫*/
        printf("%c%c\n", a[i],c);   /*輸出結果*/
    }
    printf("toupper:\n");       /*輸出提示*/
    for (i = 0; a[i] != 0; i++) { /*用for循環訪問字符串中的每個字符*/
        c = toupper(a[i]);      /*將當前字符轉換成大寫*/
        printf("%c%c\n", a[i], c);
    }
}
