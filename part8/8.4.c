#include <stdio.h>
void order(int a, int b, int c, char s) {
    int temp;
    if ( a > b ) {
        temp = a;
        a = b;
        b = temp;
    }
    if ( a > c ) {
        temp = a;
        a = c;
        c = temp;
    }
    if ( b > c ) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("%d%c%d%c%d", a, s, b, s, c);
}

int main() {
    order(5,3,7,'~');
    printf("\n");
    order(7,55,32,'<');
    printf("\n");
    order(9,4,6,'.');
}
