void loadfromfile() {
    int j = 0, fd, t;               /*定義變量*/
    i = 0;
    char na[7];                     /*定義姓名*/
    char tel[13];                   /*定義電話*/
    char file[] = "/tmp/tel.txt";   /*定義文件名*/
    extern int errno;               /*設置錯誤號*/
    fd = open(file, O_WRONLY|O_CREATE); /*打開文件*/
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
