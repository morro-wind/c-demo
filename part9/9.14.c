#include <stdio.h>
#include <string.h>
main() {
    char a[20] = "asdfgQWERT!@$%";      /*定義兩個字符串並且賦值*/
    char b[20] = "asdfgqwERT!@$%";
    if (bcmp (a, b, 5) == 0) {          /*比較這兩個字符串的前5個字符，前5個字符是相同的*/
        printf("same.\n");              /*結果爲真則輸出相同*/
    }
    else {
        printf("not same.\n");          /*結果爲假則輸出不同*/
    }
    if (bcmp(a, b, 7) == 0) {           /*比較兩個字符串的前7個字符，前7個字符是相同的*/
        printf("same.\n");
    }
    else {
        printf("not same.\n");          /*結果爲假則輸出不同*/
    }
}
