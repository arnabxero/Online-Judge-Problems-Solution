#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t, i;

    ll e, p, k, r;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld %lld", &e, &p, &k, &r);


        ll x = ((r+p)-1)/p;

        if(p*k<=r && x<=k)
            printf("Case %d: %lld\n", i, x);

        else if(p*k<=r && x>k)
            printf("Case %d: -1\n", i);

        else
        {
            ll diff = (p*k)-r;

            ll div = (e-(p*k))/diff;

            if (div<=0)
                div = 0;

            ll rslt = (div*k);

            e-=(div*diff);

            while (e>p*k)
            {
                e-=diff;

                rslt+=k;
            }

            rslt += (e+(p-1))/p;

            printf("Case %d: %lld\n", i, rslt);
        }
    }
    return 0;
}
