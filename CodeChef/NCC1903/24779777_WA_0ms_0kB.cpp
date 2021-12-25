#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()
{
    ll int t;

    scanf("%lld", &t);

    while(t--)
    {
        ll int n, k, i, r = 0;

        scanf("%lld %lld", &k,&n);

        ll int in;

        for(i=0; i<n; i++)
        {
            scanf("%lld", &in);

            if((k-in)<=0)
                break;
            k-=in;
            r++;
        }


        cout<<r<<endl;
    }
}
