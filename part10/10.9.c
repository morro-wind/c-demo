#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {                    /*定義一個結構體*/
    char name[20];                  /*姓名*/
    int age;                        /*年齡*/
    int sex;                        /*性別*/
    int height;                     /*身高*/
};

void showstu(struct student s) {    /*定義一個自定義函數，結構體變量作爲參數*/
    printf("A student: \n");        /*輸出信息*/
    printf(" Name  : %s \n", s.name);   /*訪問和輸出參數結構體的變量成員姓名*/
    printf(" Age  : %d \n", s.age);     /*訪問和輸出參數結構體的變量成員年齡*/
    printf(" Sex  : %d \n", s.sex);     /*訪問和輸出參數結構體的變量成員性別*/
    printf(" Height: %d \n\n", s.height);   /*訪問和輸出參數中結構體的變量成員身高*/
}

struct student *getstu(struct student *s) { /*自定義一個函數*/
    char name[20];                          /*定義一個字符串，存儲姓名*/
    printf("please input age:\n");          /*提示輸入姓名*/
    scanf("%d", &(*s).age);                 /*用指針訪問結構體的變量*/
    printf("please input height: \n");      /*提示輸入身高*/
    scanf("%d", &(*s).height);              /*用指針訪問結構體變量的成員*/
    printf("please input sex:\n");          /*提示輸入性別*/
    scanf("%d", &(*s).sex);
    printf("please input name:\n");         /*提示輸入姓名*/
    scanf("%s", name);                      /*輸入一個字符串，賦值給name*/
    strcpy(s->name,name);                   /*用strcpy 函數把字符串復制到結構體name成員上*/
    return(s);                              /*返回這個指針*/
}

void main() {                               /*主函數*/
    struct student s1, s2, s3;              /*用結構體定義三個學生*/
    struct student *stu1, *stu2, *stu3;     /*定義三個結構體類型的指針*/
    stu1 = getstu(&s1);                     /*對第一個學生取地址作爲參數，調用函數*/
    stu2 = getstu(&s2);                     /*對第二個學生取地址作爲參數，調用函數*/
    stu3 = getstu(&s3);
    showstu(*stu1);                         /*用第一個指針取結構體變量作爲參數顯示*/
    showstu(*stu2);                         /*用第二個指針取結構體變量作爲參數顯示*/
    showstu(*stu3);                         /*用第三個指針取結構體變量作爲參數顯示*/
}
