#include <stdlib.h>         /*包含stdlib.h頭文件*/
#include <stdio.h>
int main() {
    char a[8] = "-1234";    /*定義需要轉換的字符串*/
    char b[6] = "123";
    char c[8] = "-12.24";
    char d[6] = "0.135";
    int x, y, z, n;         /*定義4個整型變量,存儲轉換後的結果*/
    x = atoi(a);            /*用atoi()函數將字符串轉換成整型*/
    y = atoi(b);
    z = atoi(c);
    n = atoi(d);
    printf("String: %s  int: %d\n", a, x);  /*輸出字符串和轉換結果*/
    printf("String: %s  int: %d\n", b, y);
    printf("String: %s  int: %d\n", c, z);
    printf("String: %s  int: %d\n", d, n);
}
