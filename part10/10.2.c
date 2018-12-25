#include <stdio.h>

struct student{                 /*定義一個學生結構體*/
    char name[20];              /*姓名*/
    int age;                    /*年齡*/
    char sex;                   /*性別*/
    int height;                 /*身高*/
};

main() {
    struct student Jim, Lily;   /*用結構體聲明兩個學生*/
    Jim.age = 13;               /*對Jim的年齡賦值*/
    strcpy(Jim.name, "Jim Green");  /*用strcpy 函數對Jmi的姓名賦值*/
    Jim.sex='m';                /*對Jim的性別復制*/
    Jime.heigh=168/             /*對Jim的身高賦值*/

    Lily.age = 13;
    strcpy(Lily.name, "Lily Kate");
    Lily.sex='f';
    Lily.height = 174;
    printf("Jim\n");            /*輸出Jim的信息*/
    printf(" Name: %s\n", Jim.name);    /*輸出姓名*/
    printf(" Age: %d\n", Jim.age);      /*輸出年齡*/
    printf(" Sex: %c\n", Jim.sex);      /*輸出性別*/
    printf(" Height:%d:\n", Jim.height );   /*輸出身高*/

    printf("Lily\n");                   /*輸出Lily的信息*/
    printf(" Name: %s\n", Lily.name);
    printf(" Age: %d\n", Lily.age);
    printf(" Sex: %c\n", Lily.sex);
    printf(" Height: %d\n", Lily.height );
}
