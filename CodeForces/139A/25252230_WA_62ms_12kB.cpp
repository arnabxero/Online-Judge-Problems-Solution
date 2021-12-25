#include<bits/stdc++.h>

using namespace std;

int main()
{
    int p;
    int arr[9], i = 0,  r = 0, d;

    cin>>p;

    for(i=1; i<=7; i++)
    {
        cin>>arr[i];
        r+=arr[i];
    }

    //cout<<p<<"+"<<endl;

    if(r==1)
    {
        for(i=1; i<=7; i++)
            if(arr[i]==1)
            {
                cout<<i<<endl;
                return 0;
            }
    }

    else
    {
        p%=r;
        //cout<<p<<"-"<<endl;
        i = 1;

        while(p>0)
            p-=arr[i++];

        cout<<i-1<<endl;
    }
}

