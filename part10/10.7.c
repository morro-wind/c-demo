#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {                        /*定義一個結構體*/
    char name[20];                      /*姓名*/
    int age;                            /*年齡*/
    int sex;                            /*性別*/
    int height;                         /*身高*/
};

void showstu(struct student *p) {       /*定義一個自定義函數，結構體指針作爲參數*/
    printf("A student: \n");            /*輸出信息*/
    printf(" Name  : %s \n", p->name);  /*訪問和輸出參數中結構體指針指向的成員姓名*/
    printf(" Age  : %d \n", p->age);    /*訪問和輸出參數中結構體指針指向的成員年齡*/
    printf(" Sex  : %d \n", p->sex);    /*訪問和輸出參數中結構體指針指向的成員性別*/
    printf(" Height: %d \n\n", p->height);  /*訪問和輸出參數中結構體指針指向的成員身高*/
}

void main() {                               /*主函數*/
    struct student stu1, stu2;              /*定義兩個結構體變量，表示兩個學生*/
    struct student *p1, *p2;                /*定義兩個結構體指針，指向學生結構體*/

    p1 = &stu1;                             /*取第1個學生結構體地址給指針p1*/
    p2 = &stu2;                             /*取第2個學生結構體地址給指針p2*/
    stu1.age = 17;                          /*對第一個結構體變量的成員進行賦值*/
    stu1.sex = 1;
    stu1.height = 176;
    strcpy(stu1.name, "Jim");               /*strcpy函數對字符串進行賦值*/
    stu2.age = 23;                          /*對第二個結構體變量的成員進行賦值*/
    stu2.sex = 0;
    stu2.height = 171;
    strcpy(stu2.name, "Lily");              /*strcpy 函數對字符串進行賦值*/

    showstu(p1);                            /*調用函數輸出指針p1 的信息*/
    showstu(p2);                            /*調用函數輸出指針p2 的信息*/
}
