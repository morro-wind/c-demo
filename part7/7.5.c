#include <stdio.h>
void main() {
    int *p;
    int a[3];
    a[0] = 10;
    a[1] = 11;
    a[2] = 13;
    p = a;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
    p++;
    printf("%d\n", *p);
}
