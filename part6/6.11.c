#include <stdio.h>
void main() {
    int i, sum = 0;
    for ( i = 0; ; i++) {
        if ( i > 100 ) {
            break;
        }
        sum = sum + i;
    }
    printf("sum = %d\n",sum);
}
