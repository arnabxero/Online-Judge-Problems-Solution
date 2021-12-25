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

  //  for(i=0; i<n; i++)
       // cout<<arr[i]<<" "<<endl;

    int l_val = 0;

    for(i=0; i<m; i++)
    {
        l_val+=(arr[i]);
    }

    cout<<abs(l_val)<<endl;
}
