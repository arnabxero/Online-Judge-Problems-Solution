#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin>>n;

    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    bool c = false;

    sort(arr, arr+n);

    for(i=0; i<n-2; i++)
        if((arr[i]+arr[i+1])>arr[i+2])
            c = true;

    if(c)
        cout<<"YES"<<endl;

    else cout<<"NO"<<endl;
}
