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
