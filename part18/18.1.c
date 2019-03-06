#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>
struct telnum {
    char name[7];               /*姓名*/
    char tel[13];               /*電話號碼*/
};                              /*定義保存一個電話號碼的結構體*/
struct telnum num[100];         /*全局變量，一個結構體數組*/
int i;                          /*全局變量，當前記錄的條數*/
int menu() {
    int i;                      /*選擇的數字*/
    i = 0;                      /*賦初值爲0*/
    while (1) {
        printf("Please select a menu:\n");  /*提示輸入*/
        printf("    1: add a number.\n");   /*選項*/
        printf("    2: all the number.\n");
        printf("    3: select a number by name.\n");
        printf("    4: delete a number.\n");
        printf("    5: save to file.\n");
        printf("    6: load numbers from file.\n");
        printf("    0: exit.\n");
        scanf("%d", &i);        /*輸入信息*/
        if (i == 0) {           /*如果爲0 則退出*/
            printf("Byebye.\n");
            exit(1);            /*退出程序*/
        }
        if (i < 1 || i > 6) {       /*不在正確的範圍內，則顯示錯誤*/
            printf("error.\n");
            continue;               /*下次循環*/
        }
        else {
            return(i);          /*在正常範圍內，則返回這個值*/
        }
    }
}
void shownum(struct telnum t) {
    printf("Name    :%s\n", t.name);    /*顯示姓名*/
    printf("tel :%s\n", t.tel);         /*顯示電話*/
}
struct telnum addnum() {
    struct telnum numtmp;       /*定義一個電話號碼結構體變量*/
    char na[7], tel[13];        /*定義兩個數組*/
    printf("add a telephone number:\n");    /*提示信息*/
    printf("please input the name:\n");
    scanf("%s", na);            /*輸入姓名*/
    printf("please input the num:\n");  /*輸入電話號碼*/
    scanf("%s", tel);
    strcpy(numtmp.name, na);    /*將變量復制到結構體成員上*/
    strcpy(numtmp.tel, tel);
    return(numtmp);             /*返回這個結構體*/
}
void selectbyname() {
    char na[20];                    /*定義一個字符串*/
    int n, j;                       /*計數變量*/
    n = 0;
    printf("select a number by name:\n");   /*輸入姓名*/
    printf("please input a name: \n");
    scanf("%s", na);                /*輸入*/
    for (j = 0; j < i; j++) {       /*循環訪問結構體*/
        if (strcmp(num[j].name, na) == 0) {     /*比較輸入的變量與結構體中的姓名是否相同*/
            shownum(num[j]);        /*相同則輸出*/
            n++;                    /*計數加1*/
        }
    }
    if (n == 0) {
        printf("no such a name");       /*如果n爲0, 就顯示沒有這條記錄*/
    }
}
void delenum() {
    char na[20];                /*定義一個字符串*/
    int j, n;                   /*定義計數變量*/
    n = 0;                      /*計數變量賦初值爲0*/
    printf("delete a num by name:\n");  /*提示*/
    printf("please input a name: \n");  /*提示*/
    scanf("%s", na);                    /*輸入一個姓名*/
    for (j = 0; j < i; j++) {   /*循環訪問結構體數組中的沒一個姓名*/
        if (strcmp(num[j].name, na) == 0) {    /*比較輸入的姓名與結構體數組中的每個姓名*/
            n++;                /*相同則計數加1*/
            for (; j < i; j++) {    /*把後面的變量向前移動*/
                num[j] = num[j + 1];
            }
            i--;                    /*總數減1*/
            break;                 /* 結束循環*/
        }
    }
    if (n == 0) {               /*如果計數爲0, 則表示沒有這個姓名*/
        printf("no such a name");
    }
}
void savetofile() {
    int j, fd;                      /*定義變量*/
    char file[] = "/tmp/tel.txt";   /*定義文件名*/
    extern int errno;               /*設置錯誤號*/
    fd = open(file, O_WRONLY|O_CREAT);  /*打開文件*/
    if (fd != -1) {                 /*打開正常*/
        printf("opend file %s .\n", file);  /*顯示正常*/
    }
    else {                          /*不能打開文件就顯示錯誤*/
        printf("cant't open file %s.\n", file);
        printf("errno: %d\n", errno);
        printf("ERR: %s\n", strerror(errno));
    }
    for (j = 0; j < i; j++) {       /*循環訪問結構體數組，寫入變量*/
        printf(" %d %s\n", j, num[j].name); /*顯示姓名*/
        write(fd, num[j].name,7);           /*保存姓名*/
        write(fd, num[j].tel, 13);          /*保存電話*/
    }
    printf("saved.\n");             /*輸出信息*/
    close(fd);                      /*關閉文件*/
}
void loadfromfile() {
    int j = 0, fd, t;               /*定義變量*/
    i = 0;
    char na[7];                     /*定義姓名*/
    char tel[13];                   /*定義電話*/
    char file[] = "/tmp/tel.txt";   /*定義文件名*/
    extern int errno;               /*設置錯誤號*/
    fd = open(file, O_WRONLY|O_CREAT); /*打開文件*/
    if (fd != -1) {                 /*文件打開成功*/
        printf("opened file %s.\n", file);
    }
    else {
        printf("can't open file %s.\n", file);
        printf("errno: %d\n", errno);
        printf("ERR :%s\n", strerror(errno));
    }
    while ((t = read(fd, na, 7)) != 0 && t != -1) { /*讀取文件*/
        strcpy(num[i].name, na);    /*將字符串復制到結構體中*/
        read(fd, tel, 13);          /*讀取電話*/
        strcpy(num[i].tel, tel);    /*將字符串復制到結構體中*/
        i++;                        /*計數加1*/
    }
    close(fd);                      /*關閉文件*/
}

main() {
    int s, j;                       /*定義變量*/
    printf("---------Telphone Notebook.-----\n");   /*輸出提示*/

    while (1) {                     /*進入一個死循環*/
        s = menu();                 /*顯示菜單*/
        if (s == 1){                /*分別判斷s 的值，調用不同的函數*/
            num[i] = addnum();      /*添加一個電話號碼*/
            i++;                    /*總數加1*/
        }
        if (s == 2){                /*顯示所有記錄*/
            for (j = 0; j < i; j++){    /*循環*/
                shownum(num[j]);    /*顯示所有記錄，結構體作爲參數*/
            }
        }
        if (s == 3){                /*按姓名查找*/
            selectbyname();
        }
        if (s == 4){                /*刪除一條記錄*/
            delenum();
        }
        if (s == 5){                /*保存到文件*/
            savetofile();
        }
        if (s == 6){                /*從文件中導入*/
            loadfromfile();
        }
    }
}
