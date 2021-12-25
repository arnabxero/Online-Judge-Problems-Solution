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
        int n, i, r1 = 0, r2 = 0;
        cin>>n;

        char ch[n];

        for(i=0; i<n; i++)
            cin>>ch[i];

        for(i=n-1; i>=0; i--)
        {
            if(ch[i]=='<')
                break;
            else r1++;
        }

        for(i=0; i<n; i++)
        {
            if(ch[i]=='>')
                break;
            else r2++;
        }

        int rslt = (r1<r2)?r1:r2;

        cout<<rslt<<endl;
    }

    return 0;
}
