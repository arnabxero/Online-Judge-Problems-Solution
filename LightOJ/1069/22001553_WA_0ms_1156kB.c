#include<stdio.h>
int main ()
{
    int t, n, x, i;
    scanf("%d", &t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d", &n, &x);

        int r = ((x-n)*4)+((n-0)*4)+19;
        printf("Case %d: %d\n", i, r);
    }
    return 0;
}
