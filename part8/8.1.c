#include <stdio.h>
int max(int x, int y);
int main() {
    int a, b, s;
    printf("Please input a:\n");
    scanf("%d", &a);
    printf("Please input b:\n");
    scanf("%d", &b);
    s = max(a, b);
    printf("The max number is %d\n",s);
}

int max(int x, int y) {
    if (x > y) {
        return(x);
    }
    else {
        return(y);
    }
}
