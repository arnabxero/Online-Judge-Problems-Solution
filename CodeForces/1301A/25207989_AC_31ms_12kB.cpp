#include <bits/stdc++.h>

using namespace std;
//arnab
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, r = 1;
        string a, b, c;

        cin>>a>>b>>c;

        for(i=0; i<a.length(); i++)
        {
            if(c[i]!=a[i] && c[i]!=b[i])
            {
                r = 0;
                break;
            }
        }
        if(r==0)
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
