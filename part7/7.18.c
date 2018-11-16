#include <stdio.h>
main(void) {
    int i;
    int *p;
    p = &i;
    *p = 10;
    printf("%d",*p);
}
