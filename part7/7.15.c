#include <stdio.h>
main(void) {
    int i;
    int *p;
    i = 10;
    *p = i;
    printf("%d", *p);
}
