#include <stdio.h>
void show(char a, int x) {
    int i;
    for (i = 0; i < x; i++) {
        printf("%c", a);
    }
}

int main() {
    char c = 'a';
    show(c, 6);
    printf("\n");
    show('*', 9);
    printf("\n");
}
