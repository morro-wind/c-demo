#include <stdio.h>
void main()
{
    int i;
    int sum = 0;
    for ( i = 0; i <= 100; i++ )
    {
        if ( i % 2 != 0 )
        {
            continue;
        }
        sum = sum + i;
    }
    printf("sum = %d\n",sum);
}
