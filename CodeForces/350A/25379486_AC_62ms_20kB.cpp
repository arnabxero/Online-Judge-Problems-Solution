#include<bits/stdc++.h>
//arnab
using namespace std;

int main()
{
    int n, m;

    cin>>n>>m;

    int arr[n], brr[m], i, j;

    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<m; i++)
        cin>>brr[i];

    sort(brr, brr+m);

    sort(arr, arr+n);

    if(arr[0]*2<brr[0] && arr[n-1]<brr[0])
        cout<<((arr[n-1]>arr[0]*2)?(arr[n-1]):(arr[0]*2))<<endl;

    else cout<<"-1"<<endl;
}