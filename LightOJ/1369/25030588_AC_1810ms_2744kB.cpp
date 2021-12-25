#include<bits/stdc++.h>
//Arnab Again
#define ll long long

using namespace std;

int main()
{
    int t, k;

    cin>>t;

    for(k=1; k<=t; k++)
    {
        int n, q, i;

        cin>>n>>q;

        ll arr[n], rslt=0;

        for(i=0; i<n; i++)
            cin>>arr[i];

        printf("Case %d:\n", k);

        for(i=1; i<n; i++)
        {
            rslt += (arr[i-1]*(ll)(n-i));
            rslt -= (arr[n-i]*(ll)(n-i));
        }

        while(q--)
        {
            int f;

            cin>>f;

            if(f==1)
                cout<<rslt<<endl;

            else
            {
                ll x, v;

                cin>>x>>v;

                rslt += (v*(ll)(n-x-1));

                rslt -= (v*(ll)(x-0));

                rslt -= (arr[x]*(ll)(n-x-1));

                rslt += (arr[x]*(ll)(x-0));

                arr[x]=v;
            }
        }
    }
}