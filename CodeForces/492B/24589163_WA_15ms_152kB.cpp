#include<bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i, n, t;

    cin>>n>>t;

    double arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    /*for(i=0; i<n; i++)
        cout<<arr[i]<<" ";*/

    double mx = abs(0-arr[0]);

    for(i=0; i<n-1; i++)
    {
        if(((abs(arr[i]-arr[i+1]))/2)>mx)
            mx = (abs(arr[i]-arr[i+1]))/2;
    }

    printf("%.10lf", mx);
}
