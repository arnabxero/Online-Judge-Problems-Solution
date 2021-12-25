#include<stdio.h>
int main ()
{
    int t, n, x, i, r;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &n, &x);

         if(n<=x)
            r = x*4+19;
        else
            r = (2*n-x)*4 +19;

        printf("Case %d: %d\n", i,r);
    }
    return 0;
}
