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
        for(i=1; i<8; i++)
        {
            if(arr[i]!=0)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }

    else if(p>r && r!=1)
        p%=r;

    i = 1;

    while(p>0)
    {
        p-=arr[i++];

        if(i==8)
            i = 1;
    }
    cout<<i-1<<endl;
}
//lol