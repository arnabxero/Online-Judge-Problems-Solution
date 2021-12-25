#include<stdio.h>
int main ()
{
    int n, i;
    scanf("%d", &n);

    if(n>=1 && n<=20){
    for(i=0; i<n; i++)
    {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        if((a+b)!=0 && a<=1000000000 && a>=(-1000000000) && b<=1000000000 && b>=(-1000000000) && c<=1000000000 && c>=(-1000000000))
        {
            long long int r = c/(a+b);

            if(r<=1)
                printf("Case %d: NO\n", i+1);
            if(r>1)
                printf("Case %d: %lld\n", i+1, r);
        }
    }
    }
    return 0;
}
