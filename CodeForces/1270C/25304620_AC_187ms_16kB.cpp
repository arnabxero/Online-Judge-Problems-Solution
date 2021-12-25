#include<bits/stdc++.h>
#define ll long long
//arnab
using namespace std;

int main()
{
    ll int n, t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        ll int i, a, sum = 0, xor_sum = 0;

        for(i=0; i<n; ++i)
        {
            cin>>a;

            sum+=a;

            xor_sum^=a;
        }

        cout<<2<<endl;

        cout<<xor_sum <<" "<<xor_sum+sum<<endl;
    }
}