#include<stdio.h>
int main ()
{
    int n, i;
    long long int a, b, c, r;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &c);

        if((a+b)!=0)
        {
            r = c/(a+b);

            if(r>1)
                printf("Case %d: %lld\n", i, r);
            else printf("Case %d: NO\n", i);
        }
        else printf("Case %d: NO\n", i);
    }

    return 0;
}
