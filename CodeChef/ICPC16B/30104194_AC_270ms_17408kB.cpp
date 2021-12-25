#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll num[300000], t, x, y, z, i, n;

    cin>>t;

    while(t--)
    {
        cin>>n;

        i = x = y = z = 0;

        for(i=0; i<n; i++)
        {
        cin>>num[i];

        if(abs(num[i])>1)
            x++;

        if(num[i]==1)
            y++;

        if(num[i]==-1)
            z++;
        }

        if((z>1&&y==0) || x>1 || (x&&z))
        {
            cout<<"no"<<endl;
            continue;
        }
    cout<<"yes"<<endl;
  }
}
