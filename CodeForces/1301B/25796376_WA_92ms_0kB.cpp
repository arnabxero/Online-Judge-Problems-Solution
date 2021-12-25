#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;

    cin>>t;

    while(t--)
    {
        long long int n;

        cin>>n;

        long long int arr[n];

        for(long long int i=1; i<=n; i++)
            cin>>arr[i];
        long long int rnge = 99999999;
        long long int rslt=0,mx=0,mn=rnge;

        for(long long int i=2; i<=n; i++)
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
            long long int mid=mx+mn>>1;

            rslt=max(rslt,max(mid-mn,mx-mid));

            printf("%lld %lld\n",rslt,mid);
        }
    }
}
