#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int j, t;

    cin>>t;

    for(j=0; j<t; j++)
    {
        int i, n, pls = 0, mns = 0;

        cin>>n;

        char ch[n+1];

        for(i=0; i<n; i++)
        {
            scanf(" %c", &ch[i]);

            if(ch[i]=='<')
                pls++;
            if(ch[i]=='>')
                mns++;
        }

        int rslt = abs(pls-mns);

        int f_rslt = abs(1-rslt);

        cout<<f_rslt<<endl;
    }
}
