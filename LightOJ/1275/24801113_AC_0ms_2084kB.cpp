#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll f(ll t, ll n, ll c)
{
    return t*(c-n*t);
}

int main()
{
    int t, i;

    cin>>t;

    for (i=1; i<=t; i++)
    {

        int n, c;

        cin>>n>>c;

        if(n==0)
            printf("Case %d: %d\n", i, n);

        if(n==0)
            continue;

        int x = (c/(n*2));

        int y = (c/(n*2))+1;

        if (f(x, n, c) >= f(y, n, c))
            printf("Case %d: %d\n", i, x);

        else
            printf("Case %d: %d\n", i, y);
    }
    return 0;
}
