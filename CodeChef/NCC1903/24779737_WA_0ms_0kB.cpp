#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()
{
    ll int t;

    cin>>t;

    while(t--)
    {
        ll int n, k, i, r = 0;

        cin>>k>>n;

        ll int in;

        for(i=0; i<n; i++)
        {
            cin>>in;

            if((k-in)<=0)
                break;
            k-=in;
            r++;
        }


        cout<<r<<endl;
    }
}
