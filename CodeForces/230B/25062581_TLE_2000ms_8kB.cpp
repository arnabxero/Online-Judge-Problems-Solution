#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        ll int x;

        ll int c = 0;

        cin>>x;

        ll int i;

        for(i=2; i<x; i++)
        {
            if(x%i==0)
                c++;

            if(c==2)
                break;
        }
        if(c==1)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
