#include <stdio.h>
#include <stdlib.h>         /*使用strcpy函數，要包含頭文件stdlib.h*/
#include <string.h>

struct student {            /*定義一個結構體*/
    char name[20];          /*姓名*/
    int age;                /*年齡*/
    int sex;                /*性別*/
    int height;             /*身高*/
};

main() {
    struct student stu[50]; /*定義一個結構體，表示有50個學生*/
    int i = 0;              /*輸入學生的計數*/
    int j;                  /*輸出的計數*/
    char s;                 /*用戶輸入數據*/
    char name[20];          /*姓名*/
    while (1) {             /*進入一個while循環*/
        printf("input a student?\n?Y/N:");  /*提示用戶輸入選擇*/
        scanf("%c", &s);    /*用戶輸入一個字符*/

        if (s == 'N' || s == 'n') {         /*輸入N或n則中止循環*/
            break;          /*中止當前循環*/
        }

        if (s != 'n' && s != 'N' && s != 'y' && s != 'Y') {
            /*如果不是N、n、Y、y這幾個字母，則進入下一次循環*/
            printf("error. \n");        /*輸出提示*/
            continue;                   /*進入下一次循環*/
        }

        printf("please input age:\n");      /*提示輸入年齡*/
        scanf("%d", &stu[i].age);           /*輸入年齡*/
        printf("please input height:\n");   /*提示輸入身高*/
        scanf("%d", &stu[i].height);        /*輸入身高*/
        printf("please input sex:\n");      /*提示輸入性別*/
        scanf("%d", &stu[i].sex);           /*輸入性別*/
        printf("please input name:\n");     /*提示輸入姓名*/
        scanf("%s", name);                  /*輸入姓名到name 字符串*/
        strcpy(stu[i].name,name);           /*將字符串復制到學生姓名上*/
        i++;                                /*計數器自加*/
    }

    for (j = 0; j < i; j++) {               /*for循環輸出*/
        printf("Student[%d]\n",j);          /*提示第幾個學生*/
        printf(" Name : %s \n", stu[j].name);   /*輸出姓名*/
        printf(" Age  : %d \n", stu[j].age);    /*輸出年齡*/
        printf(" Sex  : %d \n", stu[j].sex);    /*輸出性別*/
        printf(" Height: %d \n", stu[j].height);    /*輸出身高*/
    }
}
