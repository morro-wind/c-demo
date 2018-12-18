#include <stdio.h>
#include <string.h>             /*包含string.h頭文件*/
main() {
    char a[] = "C is a useful language for Linux OS.I started to learn it 3 years ago .I'll study it hard.";    /*定義一個字符串並且賦值*/
    printf("%zu\n", strcspn(a, " "));    /*查找第一次出現空格的位置*/
    printf("%zu\n", strcspn(a, "."));    /*查找第一次出現句點的位置*/
    printf("%zu\n", strcspn(a, "aeiou"));/*查找第一次出現aeiou中某一個字母的位置*/
    printf("%zu\n", strcspn(a, "AEIOU"));/*查找第一次出現AEIOU中某一個字母的位置*/
    printf("%zu\n", strcspn(a, "1234567890"));/*查找第一次出現數字的位置*/
}
