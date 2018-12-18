#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char a[20] = "asdfghijk";   /*定義一個字符串並賦初值*/
    printf("%s\n", a);          /*輸出這個字符串*/
    memset(a, 'W' ,3);          /*將字符串中的前三個字符替換成W*/
    printf("%s\n", a);          /*輸出替換以後的字符串*/
    memset(a, 'x', 6);          /*將字符串中的前6個字符替換成x*/
    printf("%s\n", a);          /*輸出替換以後的字符串*/
}
