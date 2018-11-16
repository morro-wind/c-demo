#include <stdio.h>
int main() {
    char a[100];
    char *p, *q;
    printf("Please input a string:\n");
    scanf("%s",a);
    p = a;
    q = a;
    while (*p != '\0') {
        if (*p <= 122 && *p >= 97) {
            *p = *p - 32;
        }
        *p++;
    }
    printf("result: %s \n",q);
}
