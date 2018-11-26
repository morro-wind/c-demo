#include <stdio.h>
#include <ctype.h>                          /*包含ctype.h頭文件*/
char istel(char *p) {                       /*定義電話號碼測試函數，參數爲數組的頭指針*/
    int i = 0;                              /*定義一個計數變量，並初始賦值*/
    while (*p != 0) {                       /*判斷當前指針所指向的字符是不是空*/
        if (!isdigit(*p)) {                 /*判斷指針所指向的字符是不是數字，然後用！取反*/
            return 0;                       /*如果不是一個數字，則返回0*/
        }
        i++;                                /*計數加1*/
        if (i > 13) {                       /*如果字符總數大於13,則返回0*/
            return 0;
        }
        p++;                                /*指針向後移動一個字符*/
    }
    if (i < 3) {                            /*如果字符的總數小於3,則返回0*/
        return 0;
    }
    return 1;                               /*如果能執行到這一步，說明是一個電話號碼*/
}

int isname(char *p) {                       /*定義姓名測試函數，參數爲姓名數組的頭指針*/
    int i = 0;                              /*定義一個整型變量作爲計數器，並初始賦值*/
    while (*p != 0) {                       /*如果當前指向的字符不爲空，則向下循環*/
        if (!isalpha(*p)) {                 /*測試當前的字符是不是字母，然後用！取反*/
            return 0;                       /*如果當前指向的字符不是字母，則返回0*/
        }
        i++;                                /*計數加1*/
        if (i > 20) {                       /*如果字符的總數大於20,則返回0*/
            return 0;
        }
        p++;                                /*指針指向下一個字符*/
    }
    if (i < 3) {                            /*如果字符總數小於3,則返回0*/
        return 0;
    }
    return 1;                               /*如果能執行到這一部，說明測試正確，返回1*/
}

void main() {                               /*程序主函數*/
    char name[50];                          /*定義一個字符數組存儲姓名*/
    char tel[50];                           /*定義一個字符數組存儲電話*/
    char *q;                                /*定義一個指向字符的指針*/

    printf("Please input a telephone number:\n");    /*輸出一行提示*/
    scanf("%s",tel);                        /*從鍵盤輸入一行文本，賦值給數組tel*/
    q = tel;                                /*把數組的頭指針賦值給q*/
    if (istel(q)) {                         /*把指針作參數，調用函數判斷是不是一個電話號碼*/
        printf("%s is telephone number.\n ", tel);  /*如果爲真，則輸出結果*/
    }
    else {
        printf("%s is not a telephone number.\n ", tel); /*如果爲假，則輸出錯誤提示*/
    }

    printf("Please input a name:\n");        /*提示輸入一個姓名*/
    scanf("%s", name);                      /*從鍵盤讀取一行文本，賦值給數組name*/
    q = name;                               /*把數組的頭指針賦值給指針q*/
    if (isname(q)) {                        /*把指針作參數，調用函數判斷是不是一個姓名*/
        printf("%s is a name.\n ",name);    /*如果判斷結果爲真值，則輸出結果正確*/
    }
    else {
        printf("%s is not a name.\n ",name);    /*另一種情況，輸出結果錯誤*/
    }
}
