#include <stdio.h>

struct student {                /*定義一個結構體*/
    char name[15];              /*姓名*/
    int age;                    /*年齡*/
    char address[50];           /*住址*/
    int height;                 /*身高*/
};

struct class {                  /*定義一個班級結構體*/
    char teacher[20];           /*班主任姓名*/
    struct student stu[50];     /*用結構體定義50個學生*/
};

main() {                        /*程序的主函數*/
    struct class A;             /*用學生結構體聲明一個班*/
};
