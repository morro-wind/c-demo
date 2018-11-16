#include <stdio.h>
void main()
{
    int i = 0, sum = 0;
    do
    {
        if ( i % 2 == 0 )
        {
            sum = sum +i;
        }
        i++;
    }
    while ( i <= 100);
    printf("sum = %d\n",sum);
}

