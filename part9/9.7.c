#include <stdio.h>
#include <ctype.h>                                  /*包含ctype.h頭文件*/
void main() {                                       /*程序的主函數*/
    char s[100];                                       /*定義一個字符數組*/
    int i, c_num=0, c_lower=0, c_upper=0, c_mark=0; /*定義計數變量，並初始賦值*/
    printf("Please input a string:\n");             /*輸出提示信息*/
    scanf("%s", s);                                 /*從鍵盤輸入一個字符串*/
    for (i = 0; s[i] != 0; i++) {                   /*for循環，訪問字符數組中的所有字符*/
        if (isdigit(s[i])) {                        /*判斷當前字符是不是一個數字*/
            c_num++;                                /*數字字符的計數變量加1*/
        }
        if (islower(s[i])) {                        /*判斷當前字符是不是一個小寫字母*/
            c_lower++;                              /*小寫字母的計數加1*/
        }
        if (isupper(s[i])) {                        /*判斷當前字符是不是一個大寫字母*/
            c_upper++;                              /*大寫字母的計數加1*/
        }
        if (ispunct(s[i])) {                        /*判斷當前字符是不是一個特殊符號*/
            c_mark++;                               /*符號計數加1*/
        }
    }
    printf("upper: %d\n", c_upper);                 /*輸出大寫字母的統計結果*/
    printf("lower: %d\n", c_lower);                 /*輸出小寫字母的統計結果*/
    printf("mark: %d\n", c_mark);                   /*輸出符號的統計結果*/
    printf("number: %d\n", c_num);                  /*輸出數字的統計結果*/
    printf("total: %d\n", i);                       /*輸出字符的總數*/
}
