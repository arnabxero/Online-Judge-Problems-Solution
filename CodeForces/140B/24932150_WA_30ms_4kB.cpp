#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll int n;

    cin>>n;

    ll int arr[n+1][n+1];
    ll int brr[n+1];

    ll int i, j;

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            cin>>arr[i][j];

    for(i=1; i<=n; i++)
        cin>>brr[i];

    for(i=1; i<=n; i++)
    {
        ll int j = 0, k = 1;

        do
        {
            j++;

            if(arr[i][j] == i)
                continue;

            while(brr[k]==i||brr[k]>arr[i][j])
                k++;
        }
        while(brr[k] != arr[i][j]);

        printf("%lld ", arr[i][j]);
    }
}
