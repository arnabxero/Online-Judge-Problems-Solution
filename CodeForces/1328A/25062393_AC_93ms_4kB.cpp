#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x, y;

        cin>>x>>y;

        if(x%y==0)
        {
            cout<<0<<endl;
            continue;
        }
        int r = y-(x%y);

        cout<<r<<endl;
    }
}
