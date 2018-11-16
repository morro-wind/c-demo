#include <stdio.h>
void main() {
    int x, y, z, t;
    printf("Please input x:\n");
    scanf("%d", &x);
    printf("Please input y:\n");
    scanf("%d", &y);
    printf("Please input z:\n");
    scanf("%d", &z);
    if ( x > y ) {
        t = x;
        x = y;
        y = t;
    }
    if ( x > z ) {
        t = x;
        x = z;
        z = t;
    }
    if ( y > z ) {
        t = y;
        y = z;
        z = y;
    }
    printf("%d %d %d\n",x,y,z);
}
