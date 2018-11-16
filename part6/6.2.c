#include <stdio.h>
int main()
{
    int i;
    printf("Please input a number:\n");
    scanf("%d",&i);
    if ( i < 0 )
    {
        return;
    }
    if (i >= 70)
    {
        if ( i >= 85 )
        {
            printf("A\n");
        }
        else
        {
            printf("B\n");
        }
    }
    else
    {
        if ( i < 60 )
        {
            printf("D\n");
        }
        else
        {
            printf("C\n");
        }
    }
}
