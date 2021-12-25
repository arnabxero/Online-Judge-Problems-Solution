#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin>>n;

    int i, arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];


    int initb = arr[0];

    int ans = initb;


    for(i=0; i<n; i++)
    {
        if(initb<arr[i])
        {
            initb = initb - (arr[i] - initb);
        }
        else if(initb>arr[i])
        {
            initb = initb + (initb - arr[i]);
        }

        if(initb<0)
        {
            initb++;
            ans++;
        }

    }

    cout<<ans<<endl;
}
