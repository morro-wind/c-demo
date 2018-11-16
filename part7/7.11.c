#include <stdio.h>
int main() {
    int a[10];                      /*定义一个整型数组*/
    int i, j, temp;                 /*定义循环变量和中间变量*/
    for (i = 0; i < 10; i++) {      /*进行循环输入变量*/
        printf("Please enter a number:\n"); /*输出提示*/
        scanf("%d",&a[i]);          /*输入变量赋值给数组变量*/
    }
    for (i = 0; i < 10; i++) {      /*进行10次循环*/
        for (j = i + 1; j < 10; j++) {  /*循环比较剩余的变量*/
            if (a[i] < a[j]) {      /*如果前面一个数比后面数小，则交换两个数的值*/
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++) {      /*循环输出排序以后的结果*/
        printf("%d ", a[i]);
    }
    return 0;
}
