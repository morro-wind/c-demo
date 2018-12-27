#include <stdio.h>
#include <string.h>

struct student {                    /*定義一個結構體*/
    char name[15];                  /*姓名*/
    int age;                        /*年齡*/
    char address[50];               /*住址*/
    int height;                     /*身高*/
    char sex;
};

main() {
    struct student stu[3];          /*定義一個結構體變量表示三個學生*/
    stu[1].age=15;                  /*第二個學生的年齡爲15*/
    stu[2].height=167;              /*第三個學生的身高爲167*/
    stu[0].sex = 'm';               /*第一個學生的性別爲m*/
}
