#include <stdio.h>
int main ()
{
    int i = 5, j = 3;
    printf("%d\n",i > j);       /*判斷i是否大於j，返回真，輸出1*/
    printf("%d\n",i == j);      /*判斷i是否等於j，返回假，輸出0*/
    printf("%d\n",i < j);
    printf("%d\n",i != j);
    printf("%d\n",i != j);
    printf("%d\n",(i > j) && (i >= j)); /*判斷兩個條件，然後做邏輯與運算*/
    printf("%d\n",(i > j) && (i < j));
    printf("%d\n",1 && 1 && 1); /*所有條件爲真則返回真*/
    printf("%d\n",1 && 0 && 1); /*有一個條件爲假則返回假*/
    printf("%d\n",0 || 0 || 1); /*有一個條件爲真則返回真*/
    printf("%d\n",!0);          /*非假返回真*/
}
