#include <stdio.h>
main(void) {
    int i;
    int *p;
    int a[5];
    p = a;
    for (i = 0; i < 10; i++) {
        *p = i + 10;
        p++;
    }
}
