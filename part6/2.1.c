#include <stdio.h>
void main() {
    float a, b, s, c;
    printf("Please input rectangle length:\n");
    scanf("%f", &a);
    printf("Please input rectangle width:\n");
    scanf("%f", &b);
    s = a * b;
    c = 2 * (a + b);
    printf("s=%f c=%f\n", s, c);
}
