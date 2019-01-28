#include <stdio.h>
#include <string.h>
#include <netdb.h>

int main() {
    struct protoent *pro;                                   /*定義一個表示協議的結構*/
    while (pro = getprotoent()) {
        printf("protocol name : %s", pro -> p_name);
        printf("Protocol number : %d", pro -> p_proto);
        printf("Protocol alias: %s\n", pro -> p_aliases[0]);
    }
}
