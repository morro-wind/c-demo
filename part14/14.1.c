#include <stdio.h>
#include <string.h>
#include <errno.h>
int main(void) {
    printf("ENOENT:\n");            /*輸出提示*/
    char *mesg = strerror(ENOENT);  /*將錯誤號轉換成一個字符串*/
    printf(" Errno :%d\n", ENOENT); /*輸出錯誤號*/
    printf(" Message:%s\n", mesg);  /*輸出錯誤信息*/

    printf("EIO :\n");              /*EIO錯誤*/
    char *mesg1 = strerror(EIO);
    printf(" Errno :%d\n", EIO);
    printf(" Message:%s\n",mesg1);

    printf("EEXIST  :\n");          /*文件重名錯誤*/
    char *mesg2 = strerror(EEXIST);
    printf(" Errno :%d\n",EEXIST);
    printf(" Message:%s\n",mesg2);
}
