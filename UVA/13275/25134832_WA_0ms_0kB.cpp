#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll int i, j, m, n, d, y1, y2;

    scanf("%lld",&n);

    for(i=1; i<=n; i++)
    {
        ll int c = 0;

        scanf("%lld %lld %lld %lld", &d, &m, &y1, &y2);

        if(m!=2 && d!=29)
            printf("Case %lld: %lld\n",i,(y2-y1));

        else
        {
            for(j=y1; j<=y2; j=j+4)
            {
                if((j%4==0 && j%100!=0) || j%400==0)
                    c++;
            }
            printf("Case %lld: %lld\n", i, c-1);
        }
    }
}
