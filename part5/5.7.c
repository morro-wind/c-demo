#include <stdio.h>
int main ()
{
    int i = 3, j = 7, k;    /*定義變量和賦值*/
    float m = 2.5, n = 3.8, t;
    k = 3 + 7;              /*做加法運算*/
    printf("%d\n",k);
    k *= 5;                 /* *=運算，表示把k乘以5 再賦值給k*/
    printf("%d\n",k);
    k = k % j;              /*求餘運算*/
    printf("%d\n",k);
    printf("%d\n",i + j);   /*可以直接在參數列表中進行運算*/
    t = 3.8 / 2.5;
    printf("%f\n",t);       /*以浮點數的形式輸出*/
    printf("%.2f\n",m * n + 5);   /*直接在參數列表中進行運算*/
}
