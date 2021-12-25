#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;

    cin>>n;

    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    int r = 2;

    for(i=0; i<n-2; i++)
    {
        if(arr[i]+arr[i+1]==arr[i+2])
            r++;
    }

    cout<<r<<endl;
}
