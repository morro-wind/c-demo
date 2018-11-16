#include <stdio.h>
void myarray(int *a) {
    int i;
    for (i = 0; i < 10; i++) {
        *a = *a + 15;
        a++;
    }
}

int main() {
    int i;
    int m[10];
    for (i = 0; i < 10; i++) {
        m[i] = i + 10;
    }
    for (i = 0; i < 10; i++) {
        printf("%d ", m[i]);
    }
    printf("\n");
    myarray(m);
    for (i = 0; i < 10; i++) {
        printf("%d ",m[i]);
    }
}
