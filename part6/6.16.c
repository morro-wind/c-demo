#include <stdio.h>
void main() {
    int i, sum;
    i = 0;
    sum = 0;
    while (i <= 100) {
        sum = sum + i;
        i++;
    }
    printf("sum = %d \n", sum);
}
