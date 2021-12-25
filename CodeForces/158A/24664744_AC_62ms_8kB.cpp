#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int n, k, i;

    cin>>n>>k;

    int arr[n];

    for(i=0; i<n; i++)
        cin>>arr[i];

    int x = arr[k-1];
    int c = 0;

    for(i=0; i<n; i++)
    {
        if(arr[i]>=x && arr[i]!=0)
            c++;
    }

    cout<<c<<endl;
}
