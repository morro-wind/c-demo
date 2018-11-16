#include <stdio.h>
void main()
{
    int i, j;
    printf("Please input a number:\n");
    scanf("%d", &i);
    j = i % 2;
    if ( j == 0)
    {
        printf("%d number is oushu\n",i);
    }
    else
    {
        printf("%d number is jishu\n",i);
    }
}
