#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin>>t;

    while(t--)
    {
        int n, k, i, r = 0;

        cin>>k>>n;

        int arr[n];

        for(i=0; i<n; i++)
        {
            cin>>arr[i];

            k-=arr[i];
            r++;

            if(k<=0)
                break;

        }
        if(k==0)
            cout<<r<<endl;
        if(k<0)
            cout<<r-1<<endl;
    }
}
