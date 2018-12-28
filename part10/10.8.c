#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {                        /*定義一個結構體*/
    char name[20];                      /*姓名*/
    int age;                            /*年齡*/
    int sex;                            /*性別*/
    int height;                         /*身高*/
};

void showstu(struct student s) {        /*定義一個自定義函數，結構體變量作爲參數*/
    printf("A student: \n");            /*輸出信息*/
    printf(" Name  : %s \n", s.name);   /*訪問和輸出參數中結構體的變量成員姓名*/
    printf(" Age   : %d \n", s.age);    /*訪問和輸出參數中結構體的變量成員年齡*/
    printf(" Sex   : %d \n", s.sex);    /*訪問和輸出參數中結構體的變量成員性別*/
    printf(" Height: %d \n\n",s.height);    /*訪問和輸出參數中結構體的變量成員身高*/
}

struct student getstu(void) {               /*定義一個函數，結構體作爲函數的返回值*/
    struct student stu;                     /*定義一個結構體*/
    char name[20];                          /*定義一個字符串，存儲姓名*/
    printf("please input age:\n");          /*提示輸入年齡*/
    scanf("%d", &stu.age);                  /*輸入年齡*/
    printf("please input height: \n");      /*提示輸入身高*/
    scanf("%d", &stu.height);                /*輸入身高*/
    printf("please input sex: \n");         /*提示輸入性別*/
    scanf("%d", &stu.sex);                  /*輸入性別*/
    printf("please input name: \n");        /*提示輸入姓名*/
    scanf("%s", name);                      /*輸入姓名到name 字符串*/
    strcpy(stu.name, name);                 /*將字符串復制到學生姓名上*/
    return(stu);                            /*返回這個結構體*/
}

void main() {                               /*主函數*/
    struct student stu1, stu2, stu3;        /*定義三個結構體，表示三個學生*/
    stu1 = getstu();                        /*用函數getstu() 輸入stu1 的信息*/
    stu2 = getstu();                        /*用函數getstu() 輸入stu2 的信息*/
    stu3 = getstu();                        /*用函數getstu() 輸入stu3 的信息*/
    showstu(stu1);          /*結構體作爲參數，調用函數showstu 輸出stu1 的信息*/
    showstu(stu2);          /*結構體作爲參數，調用函數showstu 輸出stu2 的信息*/
    showstu(stu3);          /*結構體作爲參數，調用函數showstu 輸出stu3 的信息*/
}
