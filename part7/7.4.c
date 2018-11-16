#include <stdio.h>
void main() {
    int i, j;
    int *p, *q, *temp;
    printf("Please input the first number: \n");
    scanf("%d", &i);
    printf("Please input the second number: \n");
    scanf("%d", &j);
    p = &i;
    q = &j;
    if (*p > *q) {
        temp = p;
        p = q;
        q = temp;
    }
    printf("%d %d\n", *p, *q);
}
