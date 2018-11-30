#include <stdio.h>
#include <string.h>                         /*包含string.h頭文件*/
main() {
    char a[20] = "asdfgh";                  /*定義兩個字符串並且賦值*/
    char b[20] = "ijklmn";
    printf("1 :%s \n %s \n", a, b);         /*輸出原有的字符串*/
    bcopy(a, b, 4);                         /*第一個字符串的前4個字符復制到第二字符串中*/
    printf("2 :%s \n %s \n", a, b);         /*輸出復制以後的結果*/
}
