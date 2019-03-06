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
