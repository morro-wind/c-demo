#include <stdio.h>
func ( int a, int b )
{
    int c;
    c = a + b;
    return c;
}

void main()
{
    int x = 6;
    int y = 7;
    int z = 8;
    int r = 0;
    printf("%d\n",(x--,y++,x + y));
    r = func((x--,y++,x + y), z--);
    printf("%d\n",r);
}
