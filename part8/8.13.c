#include <stdio.h>
void order(int *x, int *y, int *z);
void change(int *x, int *y);

main() {
    int a, b, c;
    a = 5;
    b = 3;
    c = 8;
    printf("%d %d %d\n", a, b, c);
    order(&a, &b, &c);
    printf("%d %d %d\n", a, b, c);
}

void order(int *x, int *y, int *z) {
    if (*x > *y) {
        change(x,y);
    }
    if (*x > *z) {
        change(x,z);
    }
    if (*y > *z) {
        change(y,z);
    }
}

void change(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
