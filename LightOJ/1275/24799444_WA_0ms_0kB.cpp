#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, i;
    cin>>t;

    for(i=1; i<=t; i++)
    {
        double x, y;

        cin>>x>>y;

        if(x==0)
        {
            printf("Case %d: %.0lf\n", i, x);
            continue;
        }

        double ans = ((y/x)/2);

        int r = int(ans);

        printf("Case %d: %d\n", i, r);
    }
}
