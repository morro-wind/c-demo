#include <stdio.h>
#include <netdb.h>

int main() {
    struct servent *ser;                                    /*定義一個表示服務的結構體指針*/
    while(ser = getservent()) {                             /*取得一個服務*/
        printf("Name : %s ", ser -> s_name);            /*服務名稱*/
        printf("Port : %d ", ntohs(ser -> s_port));     /*服務端口*/
        printf("Protocol: %s", ser -> s_proto);         /*協議*/
        printf("Alias : %s\n", ser -> s_aliases[0]);    /*別名*/
    }
}
