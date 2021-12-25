#include<bits/stdc++.h>
#include<vector>

    using namespace std;

int main ()
{
    vector<int>vecc;

    int n, i;

    cin>>n;

    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    for(i=0; i<n; i++)
    {
        vecc.push_back(arr[i]);
    }

    for(i=0; i<n; i++)
    {
        cout<<vecc[i]<<" ";
    }
}
