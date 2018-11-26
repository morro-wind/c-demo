#include <stdlib.h>             /*包含stdlib.h头文件*/
#include <stdio.h>
int main() {
    char a[8] = "-123.45";      /*定義字符串，然後賦值*/
    char b[6] = "23.456";
    char c[6] = "-1234";
    char d[6] = "123asd";       /*字符串中含有字母*/
    char e[6] = "12a12";        /*字符串中含有字母*/
    float x, y, z, m, n;        /*定義幾個浮點型變量*/
    x = atof(a);                /*用atof()函數將字符串轉換成浮點型數*/
    y = atof(b);
    z = atof(c);
    m = atof(d);                /*注意結果中字母的處理*/
    n = atof(e);
    printf("String: %s  float: %f\n", a, x);
    printf("String: %s  float: %f\n", b, y);
    printf("String: %s  float: %f\n", c, z);
    printf("String: %s  float: %f\n", d, m);
    printf("String: %s  float: %f\n", e, n);
}
