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
        int i, n, r1 = 0, r2 = 0;
        char ch;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>ch;

            if(i==0 && ch=='<')
                r1 = 1;
            if(i==(n-1) && ch=='>')
                r2 = 1;
        }
        if(r1 == 1 && r2 == 1)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }

    return 0;
}
