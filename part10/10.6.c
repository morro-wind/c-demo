#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {                /*定義一個結構體*/
    char name[20];              /*姓名*/
    int age;                    /*年齡*/
    int sex;                    /*性別*/
    int height;                 /*身高*/
};

void showstu(struct student s) {    /*定義一個自定義函數，結構體變量作爲參數*/
    printf("A student: \n");        /*輸出信息*/
    printf(" Name : %s \n", s.name);    /*訪問和輸出參數中結構體的變量成員姓名*/
    printf(" Age  : %d \n", s.age);     /*訪問和輸出參數中結構體的變量成員年齡*/
    printf(" Sex  : %d \n", s.sex);     /*訪問和輸出參數中結構體的變量成員性別*/
    printf(" Height: %d \n\n", s.height);   /*訪問和輸出參數中結構體的變量成員身高*/
}

void main() {                       /*主函數*/
    struct student stu1,stu2;       /*定義兩個結構體變量，表示兩個學生*/

    stu1.age = 17;                  /*對第一個結構體變量的成員進行賦值*/
    stu1.sex = 1;
    stu1.height = 176;
    strcpy(stu1.name, "Jim");       /*strcpy 函數對字符串進行賦值*/
    stu2.age = 23;                  /*對第二個結構體變量的成員進行賦值*/
    stu2.sex = 0;
    stu2.height = 171;
    strcpy(stu2.name, "Lily");      /*strcpy 函數對字符串進行賦值*/

    showstu(stu1);                  /*調用函數輸出結構體stu1的信息*/
    showstu(stu2);                  /*調用函數輸出結構體stu2的信息*/
}
