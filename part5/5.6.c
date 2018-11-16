#include <stdio.h>
int main ()
{
    int i, j;                           /*定義程序中的變量*/
    char m;
    printf("please enter a char:\n");   /*提示信息*/
    scanf("%c",&m);                     /*輸入一個字母*/
    printf("the char is %c.\n",m);      /*輸出一個字母*/
    printf("please enter a number:\n");
    scanf("%d",&i);                     /*輸入一個整數*/
    printf("please enter another number:\n");
    scanf("%d",&j);
    printf("%d + %d = %d \n",i, j, i+j);    /*輸出兩個整數和這兩個整數的和*/
}
