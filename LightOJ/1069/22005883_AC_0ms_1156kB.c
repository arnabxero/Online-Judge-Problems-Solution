#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int t, n, x, i, r;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &n, &x);

        r = ((n+abs(n-x))*4)+19;

        printf("Case %d: %d\n", i,r);
    }
    return 0;
}

