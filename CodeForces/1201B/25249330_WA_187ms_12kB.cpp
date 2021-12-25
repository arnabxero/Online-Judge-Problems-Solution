#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll int r = 0, bg = 0, n, i, x;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>x;
        r+=x;

        if(bg<x)
            bg = x;
    }


    if(r%2==0 && bg<=r)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
