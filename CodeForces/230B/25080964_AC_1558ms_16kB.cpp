#include<bits/stdc++.h>
#define ll long long

using namespace std;

int prime_check(ll int sq, ll int sq2)
{
    ll int i;

    if(sq<2)
        return 0;

    else if(sq==2)
        return 1;

    else if(sq%2==0)
        return 0;

    for(i=3; i<=sq2; i+=2)
    {
        //cout<<i<<endl;

        if(sq%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        ll int x;

        cin>>x;

        ll int sq = sqrt(x);
        ll int sq2 = sqrt(sq);

        //cout<<sq<<endl;
        //cout<<sq2<<endl;

        if(x==sq*sq && prime_check(sq, sq2)==1)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
