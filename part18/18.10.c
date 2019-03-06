#include <18.1.c>
#include <18.2.c>
#include <18.3.c>
#include <18.4.c>
#include <18.5.c>
#include <18.6.c>
#include <18.7.c>

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
