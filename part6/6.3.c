#include <stdio.h>
int main()
{
    int i;
    printf("please input a number:\n");
    scanf("%d",&i);
    if ( i < 0 || i > 6 )
    {
        printf("input error.\n");
    }
    else
    {
        switch(i)
        {
            case 0:
                printf("Sunday\n");
                break;
            case 1:
                printf("Mondy\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf ("Saturday\n");
                break;
        }
    }
}
