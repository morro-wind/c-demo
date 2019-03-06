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
