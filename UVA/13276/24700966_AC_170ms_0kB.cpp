#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main ()
{
    int n, i;

    cin>>n;

    ll e, p, k, r;

    for(i=1; i<=n; i++)
    {
        cin>>e>>p>>k>>r;

        if((p*k)<=r)
        {
            ll rslt1 = (e+(p-1))/p;

            if(rslt1<=k)
                printf("Case %d: %lld\n", i, rslt1);

            else printf("Case %d: -1\n", i);
        }
        else
        {
            ll diff = (p*k)-r;

            ll div = (e-(p*k))/diff;

            if(div<=0)
                div = 0;

            ll rslt2 = (div*k);

            e-=(diff*div);

            while (e>(p*k))
            {
                rslt2+=k;
                e-=diff;
            }

            rslt2+=(e+(p-1))/p;

            printf("Case %d: %lld\n",i, rslt2);
        }
    }
}
