#include <stdio.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>

int main(int argc, char *argv[]) {
    struct hostent *host;                               /*主機名結構體*/
    char addr[] = "202.108.249.216";                    /*定義IP 地址*/
    struct in_addr in;                                  /*地址結構體*/
    struct sockaddr_in addr_in;
    extern int h_errno;

    if ((host = gethostbyaddr(addr, sizeof(addr), AF_INET)) != (struct hostent *) NULL) {
        memcpy(&addr_in.sin_addr.s_addr, host -> h_addr, 4);    /*輸出主機名的信息*/
        in.s_addr = addr_in.sin_addr.s_addr;
        printf("Domain name: %s \n", host -> h_name);
        printf("IP length: %d\n", host -> h_length);
        printf("Type: %d\n", host -> h_addrtype);
        printf("IP : %d\n", inet_ntoa(in));
    }
    else {
        printf("Error: %d\n", h_errno);
        printf("%s\n", hstrerror(h_errno));
    }
}
