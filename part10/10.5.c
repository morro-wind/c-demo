#include <stdio.h>
#include <stdlib.h>         /*因爲要使用strcpy函數，所以要包含頭文件stdlib.h*/
#include <string.h>

struct student {            /*定義一個結構體*/
    char name[20];          /*姓名*/
    int age;                /*年齡*/
    int sex;                /*性別*/
    int height;             /*身高*/
};

main() {
    struct student stu;     /*定義一個結構體變量*/
    struct student *p;      /*定義一個指向結構體變量的指針*/

    p = &stu;               /*結構體取地址賦值給結構體指針*/
    stu.age = 15;           /*訪問結構體的成員，對年齡賦值*/
    strcpy(stu.name, "Jim");    /*用strcpy 函數對姓名賦值*/

    (*p).sex = 1;               /*用結構體指針訪問性別成員變量*/
    (*p).height = 168;          /*用結構體指針訪問身高成員變量*/

    printf("Name : %s \n", stu.name);   /*輸出這些成員變量的值*/
    printf("Age  : %d \n", stu.age);
    printf("Sex  : %d \n", stu.sex);
    printf("Height: %d \n\n", stu.height);

    p->height = 169;                    /*用箭頭方法訪問成員變量*/
    p->sex = 0;

    printf("Name  : %s \n", stu.name);  /*輸出結構體的成員*/
    printf("Age   : %d \n", stu.age);
    printf("Sex   : %d \n", stu.sex);
    printf("Height : %d \n\n", stu.height);

    printf("Name  : %s \n", (*p).name); /*用指針訪問結構體變量*/
    printf("Age   : %d \n", (*p).age);
    printf("Sex   : %d \n", p->sex);    /*用箭頭符號代替結構體指針訪問結構體成員*/
    printf("Height: %d \n\n", p->height);
}
