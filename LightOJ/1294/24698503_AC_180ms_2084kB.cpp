#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main ()
{
    ll int t, i, cse = 1;

    cin>>t;

    while(t--)
    {
        ll int x, y;

        cin>>x>>y;

        ll int a = (x*y)/2;

        cout<<"Case "<<cse<<": "<<a<<endl;
        cse++;
    }
}
