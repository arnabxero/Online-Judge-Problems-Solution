#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, i;

    cin>>n>>m;

    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    int l_val = 0;

    int c = 0;

    i = 0;

    while(c<m && i<n && arr[i]<0)
    {
        l_val+=arr[i];

        c++;

        i++;
    }

    cout<<abs(l_val)<<endl;
}
