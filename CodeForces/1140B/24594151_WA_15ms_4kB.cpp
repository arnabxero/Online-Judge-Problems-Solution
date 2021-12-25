#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, j;
    cin>>t;

    for(j=0; j<t; j++)
    {
        int n, i, r = 0;
        cin>>n;

        char ch[n];

        for(i=0; i<n; i++)
            cin>>ch[i];

        for(i=0; i<n-1; i++)
        {
            if(ch[i]=='<' && ch[i+1]=='>')
                r = 1;
        }
        if(r==1)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}
