#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n;

        cin>>n;

        int arr[n];

        for(int i=1; i<=n; i++)
            cin>>arr[i];
        int rnge = 99999999;
        int rslt=0,mx=0,mn=rnge;

        for(int i=2; i<=n; i++)
        {
            if(arr[i]==-1&&arr[i-1]!=-1)
            {
                mx=max(mx,arr[i-1]);
                mn=min(mn,arr[i-1]);
            }

            else if(arr[i]!=-1&&arr[i-1]!=-1)
                rslt=max(rslt,abs(arr[i]-arr[i-1]));

            else if(arr[i]!=-1&&arr[i-1]==-1)
            {
                mx=max(mx,arr[i]);
                mn=min(mn,arr[i]);
            }
        }

        if(mn==rnge)
            printf("%d 0\n",rslt);

        else
        {
            int mid=mx+mn>>1;

            rslt=max(rslt,max(mid-mn,mx-mid));

            printf("%d %d\n",rslt,mid);
        }
    }
}
