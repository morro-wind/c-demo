#include <stdio.h>
void main() {
    int i = 10, m, n;
    int a[4][5];
    for (m = 0; m < 4; m++) {
        for (n = 0; n < 5; n++) {
            a[m][n] = i;
            i++;
        }
    }
    for (m = 0;m < 4;m++) {
        for (n = 0;n < 5;n++) {
            printf("a[%d][%d] = %d ",m,n,a[m][n]);
        }
        printf("\n");
    }
}
