#include<bits/stdc++.h>

using namespace std;
//Arnab
int main ()
{
    int t, j;

    cin>>t;

    for(j=1; j<=t; j++)
    {
        int x;
        char ch[6];

        cin>>x>>ch;

        if(ch[0]=='A')
        {
            if(x%2==0)
                cout<<"Case "<<j<<": "<<"Alice"<<endl;
            else    cout<<"Case "<<j<<": "<<"Bob"<<endl;
        }
        if(ch[0]=='B')
        {
            if(x%2==0)
                cout<<"Case "<<j<<": "<<"Bob"<<endl;
            else    cout<<"Case "<<j<<": "<<"Alice"<<endl;
        }
    }
}
