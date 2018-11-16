#include <stdio.h>
int max(int i,int j)
{
    if (i > j)
    {
        return (i);
    }
    else
    {
        return (j);
    }
}

    void main()
    {
        int n = max(1,2);
        printf ("%d",n);
        //return 0;
    }
