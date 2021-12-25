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

        int mn = (x>y)?y:x;
        int mx = (x>y)?x:y;

        if(mx%mn==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
