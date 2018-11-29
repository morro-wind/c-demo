#include <stdlib.h>
#include <stdio.h>
int main() {
    char a[8] = "123567";           /*定義需要轉換的字符串並且賦值*/
    char b[8] = "-45645";           /*字符串中可以有負號*/
    char c[8] = "5645.234";         /*需要注意小數點的處理方式*/
    char d[8] = "0.135";            /*需要注意字母的處理方式*/
    char e[8] = "5675asd";
    long x, y, z, n, m;             /*定義幾個長整型變量存儲轉換結果*/
    x = atol(a);                    /*用atol()函數將字符串轉換成長整型數*/
    y = atol(b);
    z = atol(c);
    n = atol(d);
    m = atol(e);
    printf("string: %s long: %ld\n", a, x); /*輸出字符串和轉換以後的長整型數*/
    printf("string: %s long: %ld\n", b, y);
    printf("string: %s long: %ld\n", c, z);
    printf("string: %s long: %ld\n", d, n);
    printf("string: %s long: %ld\n", e, m);
}
