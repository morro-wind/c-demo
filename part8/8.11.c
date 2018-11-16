#include <stdio.h>
void change(int *x, int *y);

main() {
    int m, n;
    m = 3;
    n = 5;
    printf("m:%d n:%d\n", m, n);
    change(&m, &n);
    printf("m:%d n:%d\n", m, n);
    change(&m, &n);
    printf("m:%d n:%d\n", m, n);
}

void change(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
