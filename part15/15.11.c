#include <stdio.h>
#include <arpa/inet.h>

int main() {
    long local;
    int port;
    local = 123456;
    port = 1024;
    printf("net: %d\n", htonl(local));      /*轉換成網絡字節順序*/
    printf("net: %d\n", htons(port));
    printf("local: %d\n", ntohl(htonl(local))); /*轉換成本地字節順序*/
    printf("local: %d\n", ntohs(htons(port)));
}
