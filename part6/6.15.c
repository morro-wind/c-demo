#include <stdio.h>
void main() {
    float x, y;
    printf("Please input a number:\n");
    scanf("%f",&x);
    y = x > 0 ? x:(-x);
    printf("number: %f \nvalue: %f\n",x,y);
}
