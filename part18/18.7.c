void delenum() {
    char na[20];                /*定義一個字符串*/
    int j, n;                   /*定義計數變量*/
    n = 0;                      /*計數變量賦初值爲0*/
    printf("delete a num by name:\n");  /*提示*/
    printf("please input a name: \n");  /*提示*/
    scanf("%s", na);                    /*輸入一個姓名*/
    for (j = 0, j < i; j++) {   /*循環訪問結構體數組中的沒一個姓名*/
        if (strcmp(num[j].name, na) = 0) {    /*比較輸入的姓名與結構體數組中的每個姓名*/
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
