#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n], i;

    for(i=0; i<n; i++)
        cin>>arr[i];

    sort(arr, arr+n);

    /*for(i=0; i<n; i++)
        cout<<arr[i]<<endl;*/
        
    int mn = 0;
    
    for(i=(n-1); i>=0; i--)
    {
        if(arr[i]<0)
            break;
        
        if(mn>arr[i])
            mn = arr[i];
    }
    
    cout<<mn<<endl;
}
