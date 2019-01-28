#include <stdio.h>
#include <netdb.h>
#include <string.h>

int main() {
    struct protoent *pro;                                   /*定義一個表示協議的結構體*/
    pro = getprotobyname("icmp");                           /*取得ICMP 協議的信息*/
    printf("Protocol name : %s\n", pro -> p_name);          /*協議名稱*/
    printf("Protocol number : %d\n", pro -> p_proto);       /*協議編號*/
    printf("Protocol alias: %s\n", pro -> p_aliases[0]);    /*協議別名*/
    pro = getprotobyname("udp");                            /*取得UDP協議的信息*/
    printf("Protocol name : %s\n", pro -> p_name);
    printf("Protocol number : %d\n", pro -> p_proto);
    pro = getprotobyname("tcp");                            /*取得TCP 協議的信息*/
    printf("Protocol name : %s\n", pro -> p_name);
    printf("Protocol number : %d\n", pro -> p_proto);
    printf("Protocol alias : %s\n", pro -> p_aliases[0]);
}
