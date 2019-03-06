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
