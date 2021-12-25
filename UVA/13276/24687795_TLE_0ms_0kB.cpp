#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    ll int e, p, k, r;

    ll int t, i;

    cin>>t;

    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld %lld", &e, &p, &k, &r);

        ll int j, c = 0, x = 0;

        if((p*k)<=r)
        {
            printf("Case %lld: -1\n", i);
            return 0;
        }
        else
        {
            while(e>0)
            {
                if(x==k)
                {
                    e = e + r;
                    x = 0;
                }

                e = e - p;
                c = c + 1;
                x = x + 1;
            }
            printf("Case %lld: %lld\n", i, c);
        }
    }
}
