#include <stdio.h>
#include <netdb.h>

int main() {
    struct protoent *pro;                       /*定義一個表示協議的結構體指針*/
    int i;

    for (i =0; i < 5; i++) {
        pro = getprotobynumber(i);
        printf("Protocol name : %s\n", pro -> p_name);          /*協議名稱*/
        printf("Protocol number : %d\n", pro -> p_proto);      /*協議編號*/
        printf("Protocol alias: %s\n", pro -> p_aliases[0]);    /*協議別名*/
    }
}
