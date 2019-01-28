#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netdb.h>

int main(int argc, char *argv[]) {
    struct hostent *host;               /*定義hostent 結構體指針*/
    char hostname[] = "www.163.com";    /*域名*/
    char hostname2[] = "www.liepass.com";
    struct in_addr in;                  /*機構體*/
    struct sockaddr_in addr_in;
    extern int h_errno;

    if ((host = gethostbyname(hostname)) != NULL) { /*取得主機地址*/
        memcpy(&addr_in.sin_addr.s_addr,host -> h_addr,4);  /*復制地址*/
        in.s_addr = addr_in.sin_addr.s_addr;
        printf("Domain name: %s \n", hostname);     /*輸出主機名*/
        printf("IP length: %d\n", host -> h_length);    /*地址長度*/
        printf("Type: %d\n", host -> h_addrtype);   /*地址種類*/
        printf("IP : %d \n", inet_ntoa(in));    /*IP地址*/
    }
    else {
        printf("Domain name: %s \n", hostname);
        printf("Error: %d\n", h_errno);
        printf("%s\n", hstrerror(h_errno));
    }

    if ((host = gethostbyname(hostname2)) != NULL) {    /*解析一個不存在的地址*/
        memcpy(&addr_in.sin_addr.s_addr, host -> h_addr, 4);
        in.s_addr = addr_in.sin_addr.s_addr;
        printf("Domain name: %s \n", hostname2);
        printf("IP : %d\n", inet_ntoa(in));
        printf("IP length: %d \n", host -> h_length);
        printf("Type: %d\n", host -> h_addrtype);
    }
    else {
        printf("Domain name: %s \n", hostname2);
        printf("Error: %d \n", h_errno);
        printf("%s \n", hstrerror(h_errno));
    }
}
