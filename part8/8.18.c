#include <stdio.h>
void add( int a, int b, int *c) {   /*定義一個自定義函數，參數是兩個整型變量和一個指針*/
    *c = a + b;                     /*將相加的結果賦值給參數中指針指向的值*/
}

int main() {                        /*程序的主函數*/
    int a, b, c;                    /*定義三個整型變量*/
    a = 5;                          /*變量賦值*/
    b = 8;
    add(a, b, &c);                  /*調用函數求和，c取地址作爲參賽*/
    printf("reslut is %d",c);       /*輸出c的值*/
}
