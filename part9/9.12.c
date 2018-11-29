#include <stdlib.h>
#include <stdio.h>
int main() {
    float a, b;         /*定義兩個浮點型數*/
    char *p;            /*定義一個指向浮點數的指針*/
    int po, sign;       /*定義兩個整型變量用於返回結果*/
    a = 123.45;         /*需要轉換的浮點數*/
    b = -2345.754;
    p = ecvt(a, 4, &po, &sign); /*轉換成字符串*/
    printf("float: %f  string: %s  howmany: 4  dot: %d sing:%d\n", a, p, po, sign);
    p = ecvt(b, 4, &po, &sign);
    printf("float:%f string:%s howmany:4 dot:%d sign:%d\n", b, p, po, sign);
}
