#include<bits/stdc++.h>

using namespace std;
//arnb
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;

        cin>>n;

        int arr[n], brr[n];
        int i;

        for(i=0; i<n; i++)
            cin>>arr[i];

        for(i=0; i<n; i++)
            cin>>brr[i];

        sort(arr, arr+n);
        sort(brr, brr+n);

        for(i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;

        for(i=0; i<n; i++)
            cout<<brr[i]<<" ";
    }
}