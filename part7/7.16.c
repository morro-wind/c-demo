#include <stdio.h>
main(void) {
    int i, j;
    int *p;
    i = 10;
    p =& j;
    *p = i;
    printf("%d",*p);
}
