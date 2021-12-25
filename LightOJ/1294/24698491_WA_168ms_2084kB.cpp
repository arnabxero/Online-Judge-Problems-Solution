#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t, i, cse = 1;

    cin>>t;

    while(t--)
    {
        int x, y;

        cin>>x>>y;

        int a = (x*y)/2;

        cout<<"Case "<<cse<<": "<<a<<endl;
        cse++;
    }
}
