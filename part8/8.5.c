#include <stdio.h>
char result(int x) {
    char s;
    if (x >= 90) {
        s = 'A';
    }
    else if (x >= 80) {
        s = 'B';
    }
    else if (x >= 70) {
        s = 'C';
    }
    else if (x >= 60) {
        s = 'D';
    }
    else {
        s = 'E';
    }
    return(s);
}
int main() {
    char r;
    int i = 1;
    while (i != 0) {
        printf("Please input a number:\n");
        scanf("%d",&i);
        r = result(i);
        printf("%c\n",r);
    }
}
