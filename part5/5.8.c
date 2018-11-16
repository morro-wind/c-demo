#include <stdio.h>
int main ()
{
    int i = 3, j = 7;
    i++;                    /*i的值爲4*/
    printf("%d\n", i);
    printf("%d\n", i++);    /*輸出i的值爲4,然後自加得5*/
    printf("%d\n", i++);    /*輸出i的值爲5,然後自加得6*/
    printf("%d\n", ++i);    /*自加得7,輸出結果爲7*/
    printf("%d\n", --i);    /*自減得6,輸出結果爲6*/
    printf("%d\n", i--);    /*輸出i的值爲6,然後自減得5*/
    printf("i=%d j=%d %d\n", i,j,i++ + j++);   /*先取值相加，然後分別自加*/
}
